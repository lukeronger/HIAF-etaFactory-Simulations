// libc includes
#include <iostream>

// Root includes
#include "TROOT.h"
#include "TClonesArray.h"
#include "TParticlePDG.h"
#include "TRandom.h"
#include "TGeoManager.h"
#include "TGeoMatrix.h"
#include "TLorentzVector.h"

#include "ChnsEmcClusterTask.h"
//#include "ChnsEmcCluster.h"

// framework includes
#include "FairRootManager.h"
#include "FairRun.h"
#include "FairRuntimeDb.h"
#include "FairHit.h"

using namespace std;
using namespace ParDetRe;

// -----   Default constructor   -------------------------------------------
ChnsEmcClusterTask::ChnsEmcClusterTask() :
	FairTask("Cluster reconstruction task for ChnsEmc"),
	fPersistance(kTRUE),
	fBranchName("ChnsEmcDigi"),
	fPointArray(NULL),
	fMctruthArray(NULL),
	fHitOutputArray(NULL)
{
}
// -------------------------------------------------------------------------


// -----   Destructor   ----------------------------------------------------
ChnsEmcClusterTask::~ChnsEmcClusterTask()
{
}

// -----   Public method Init   --------------------------------------------
InitStatus ChnsEmcClusterTask::Init()
{
	// Get RootManager
	FairRootManager* ioman = FairRootManager::Instance();
	if ( ! ioman ) {
		std::cout << "-E- ChnsEmcClusterTask::Init: "
			<< "RootManager not instantiated!" << std::endl;
		return kFATAL;  }

	// Get input array
	fPointArray = (TClonesArray*) ioman->GetObject(fBranchName);
	if ( ! fPointArray ) {
		std::cout << "-W- ChnsEmcClusterTask::Init: "<< "No "<<fBranchName
			<<" array!" << std::endl;
		return kERROR;  }

	// Get MCTruth collection
	fMctruthArray=(TClonesArray*) ioman->GetObject("MCTrack");
	if(fMctruthArray==0)  {
		std::cout << "-W- ChnsEmcClusterTask::Init: No McTruth array!" << std::endl;
		return kERROR;  }

	// Create and register output array
	fHitOutputArray = new TClonesArray("ChnsEmcCluster");
	ioman->Register("ChnsEmcCluster", "ChnsEmc", fHitOutputArray, fPersistance);

	Geometry_Init();

	W0 = RecoPar->GetW0();
	Cluster_enenrgy_cut = RecoPar->GetCluster_enenrgy_cut();
	Block_energy_cut = RecoPar->GetBlock_energy_cut();
	Reverse_phi_k = RecoPar->GetReverse_phi_k();
	N_loop_safety = RecoPar->GetN_loop_safety();
	Max_cluster = RecoPar->GetMax_cluster();
	Max_blocks = RecoPar->GetMax_blocks();
	Total_max_cluster = RecoPar->GetTotal_max_cluster();

	std::cout << "-I- gGeoManager = "<<gGeoManager << std::endl;
	return kSUCCESS;
}
// -------------------------------------------------------------------------
void ChnsEmcClusterTask::SetParContainers()
{
	// Get Base Container
	FairRun* ana = FairRun::Instance(); 
	FairRuntimeDb* rtdb = ana->GetRuntimeDb(); //use Run to get db
	//ChnsSdsIdealDigiTask::SetParContainers();
	
	RecoPar = (ChnsEmcReadPar*) rtdb->getContainer("ChnsEmcReadPar");

	if(RecoPar != NULL){
		printf("Got ChnsEmcReadPar from database\n");
		RecoPar->Print();
	} else {
		printf("could not get ChnsEmcRAeadPar from database\n");
		abort();
	}
}


// -----   Public method Exec   --------------------------------------------
// event level
void ChnsEmcClusterTask::Exec(Option_t*)
{
	if ( ! fHitOutputArray ) Fatal("Exec", "No fHitOutputArray");
	fHitOutputArray->Delete(); // ???????
	fHitOutputArray->Clear();

	Event_Init();

	// get MCTruth info
	Int_t nMCTruthPoints = fMctruthArray->GetEntriesFast();

	/*  Read ChnsEmcPoints data, and digization */
	Int_t size = 0;
	Int_t nChnsEmcDigi = fPointArray->GetEntriesFast(); //fast, ignore non-empty slots

	if(nChnsEmcDigi!=1){ cout<<"ERROR!!!!"<<endl; }

	fCurrentChnsEmcDigi = (ChnsEmcDigi*)fPointArray->At(0); // only one array
	fNblocks=fCurrentChnsEmcDigi->GetNblocks();
	fNblocksBarrel=fCurrentChnsEmcDigi->GetNblocksBarrel();
	fNblocksIon=fCurrentChnsEmcDigi->GetNblocksIon();
	fNblocksE=fCurrentChnsEmcDigi->GetNblocksE();
	fElossModule=fCurrentChnsEmcDigi->GetElossModule();
	fLocationID=fCurrentChnsEmcDigi->GetLocationID();
	fSegment=fCurrentChnsEmcDigi->GetSegment();
	fModule=fCurrentChnsEmcDigi->GetModule();
	fElossAll=fCurrentChnsEmcDigi->GetElossAll();

	FillBlocksData();
	sElossAll=fElossAll;

	// Do clustering
	if(fNblocksBarrel>0){ Do_clustering_barrel(); }
	if(fNblocksIon>0){ Do_clustering(1); }
	if(fNblocksE>0){ Do_clustering(2); }

	Sort_cluster_final();

	//TGeoNode* node = gGeoManager->FindNode(pos.x(),pos.y(),pos.z());
	//TString volname = node->GetVolume()->GetName();

	cout<<"sNclusters:  "<<sNclusters<<endl;
	for(int i=0; i<sNclusters; i++){
		cout<<"cluster ENERGY: "<<sEnergyCluster[i]<<endl;
		new ((*fHitOutputArray)[i]) ChnsEmcCluster(sEnergyCluster[i], sTheta[i], sPhi[i], sLocationID[i], sNblocks[i], sBlockID[i], sBlockEnergy[i]);
	}

	if (fVerbose > 0) {   //where was defined???
		//	std::cout<<fHitOutputArray->GetEntriesFast() <<" Hits created out of "
		//		<<fPointArray->GetEntriesFast() <<" Points"<<std::endl;
		//std::cout<<"FINISH OK!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<std::endl;
	}
}

void ChnsEmcClusterTask::Geometry_Init()  // need to optimize
{
	/**  Barrel  **/
	//transfer the angle of module in segement to theta angle
	for(int i=0; i<N_module_barrel; i++){ //start from +z, so 0 = +z, 1 = -z ....
		if(i<N_module_minus){ // -z
			fModule_theta_barrel[i]= TMath::ATan(R_module_barrel[N_module_minus-1-i]/-Z_module_barrel[N_module_minus-1-i])+TMath::Pi(); // ATan(y/x)
		}
		if(i>=N_module_minus){ // +z
			fModule_theta_barrel[i]= TMath::ATan(R_module_barrel[i-N_module_minus]/(Z_module_barrel[i-N_module_minus]));
		}
		//cout<<i<<"  "<<fModule_theta_barrel[i]<<endl;
	}

	// segment: 0 ~ 2pi() 
	for(int i=0; i<N_segment_barrel; i++){
		fSegment_phi_barrel[i]= i*Theta_bin_barrel + Theta_bin_barrel/2.0;
		//cout<<i<<"   "<<fSegment_phi_barrel[i]<<endl;
	}

	/** hadron endcap  **/
	for(int i=0; i<N_module_hadron; i++){
		for(int j=0; j<N_module_hadron; j++){
			double y_angle=TMath::Abs((2*(Half_N_module_hadron-1-i)+1)*Theta_bin_ion/2);
			double x_angle=TMath::Abs((2*(Half_N_module_hadron-1-j)+1)*Theta_bin_ion/2);
			double dz = (TMath::Sin(x_angle)*TMath::Cos(y_angle) + TMath::Sin(y_angle)) * 4.0/2.0;  // rotate x_angle around y-axis firstly, then totate y_angle around x-axis. dz is the distance from the front center to the whole front plane. check the note
			// important notice : Add rotation correction： x->y, y->x
			if(i<Half_N_module_hadron) { fAngle_xy_ion[i][j][1]= -TMath::ATan(X_ion[Half_N_module_hadron-1-i]/(Distance_hadron+dz)); }  //-y
			else { fAngle_xy_ion[i][j][1]=TMath::ATan(X_ion[i-Half_N_module_hadron]/(Distance_hadron+dz)); }  //+y

			if(j<Half_N_module_hadron) { fAngle_xy_ion[i][j][0]= -TMath::ATan(X_ion[Half_N_module_hadron-1-j]/(Distance_hadron+dz)); }  //-x
			else { fAngle_xy_ion[i][j][0]=TMath::ATan(X_ion[j-Half_N_module_hadron]/(Distance_hadron+dz)); }  //+x
			//cout<<i<<"  "<<j<<"  "<<"   "<<y_angle<<"  "<<x_angle<<"  "<<dz<<"  "<<fAngle_xy_ion[i][j][0]<<"  "<<fAngle_xy_ion[i][j][1]<<endl;
		}
	}

	/** e endcap  **/
	for(int i=0; i<N_module_e; i++){
		for(int j=0; j<N_module_e; j++){
			double y_angle=TMath::Abs((2*(Half_N_module_e-1-i)+1)*Theta_bin_e/2);
			double x_angle=TMath::Abs((2*(Half_N_module_e-1-j)+1)*Theta_bin_e/2);
			double dz = (TMath::Sin(x_angle)*TMath::Cos(y_angle) + TMath::Sin(y_angle)) * 4.0/2.0;   // rotate x_angle around y-axis firstly, then totate y_angle around x-axis. dz is the distance from the front center to the whole front plane. check the note
			// important notice : Add rotation correction, x->y; y->(-x)
			if(i<Half_N_module_e) { fAngle_xy_e[i][j][1]= -TMath::ATan(X_e[Half_N_module_e-1-i]/(Distance_e+dz)); }
			else { fAngle_xy_e[i][j][1]= TMath::ATan(X_e[i-Half_N_module_e]/(Distance_e+dz)); }

			if(j<Half_N_module_e) { fAngle_xy_e[i][j][0]= TMath::ATan(X_e[Half_N_module_e-1-j]/(Distance_e+dz)); }
			else { fAngle_xy_e[i][j][0]= -TMath::ATan(X_e[j-Half_N_module_e]/(Distance_e+dz)); }
		}
	}
}

void ChnsEmcClusterTask::Event_Init()
{
	fNblocks=0;
	fNblocksBarrel=0;
	fNblocksIon=0;
	fNblocksE=0;
	fLocationID.clear();
	fSegment.clear();
	fModule.clear();
	fElossModule.clear();
	fElossAll=0;

	fN_tag_barrel=0;
	fN_tag_ion=0;
	fN_tag_e=0;
	fElossModule_barrel.clear();
	fElossModule_ion.clear();
	fElossModule_e.clear();

	sNclusters=0;
    sNtags=0;
    sEnergyCluster.clear();
    sTheta.clear();
    sPhi.clear();
    sLocationID.clear();
    sNblocks.clear();
    sBlockID.clear();
    sBlockEnergy.clear();
    sElossAll=0;

	memset(eloss_module, 0, sizeof(eloss_module));
}

void ChnsEmcClusterTask::FillBlocksData()
{
	for(int i=0; i<fNblocks; i++){
		eloss_module[fLocationID[i]][fSegment[i]][fModule[i]] = fElossModule[i]; //simple method.......
	}
}

void ChnsEmcClusterTask::Do_clustering_barrel(){
	// method: ntag->(k,l)->(k,l)' neighbour->ntag_other.  each transformation need a array
    // tag_list: ntag->(k,l);
	int n_tag_barrel=0;
	int n_cluster=0;
	vector<int> tag_list[4]; // n_tag,k,l,m,ifmax
	vector<double> energy_list;
	vector<int> cluster_max;
	int tag_module[N_segment_barrel][N_module_barrel][2]={0}; //tag_module store tag_list number, and tag_list store module information too
	for(int i=0; i<fNblocks; i++){
		if(fLocationID[i]==0 && fElossModule[i]>Block_energy_cut){
			int k=fSegment[i];
			int l=fModule[i];
			tag_module[k][l][0]=-1; // initialize, store the cluster it belong to
			tag_module[k][l][1]=n_tag_barrel; // the No.
			tag_list[0].push_back(k);
			tag_list[1].push_back(l);
			tag_list[2].push_back(-1);
			tag_list[3].push_back(n_tag_barrel);
			energy_list.push_back(fElossModule[i]);
			if(Check_neighbour_max(0, k, l)) {
				cluster_max.push_back(n_tag_barrel);
				n_cluster++;
			}
			n_tag_barrel++;
		}
	}
	if(fCout_open==true){ cout<<"N clusters: "<<n_cluster<<"  N_block: "<<n_tag_barrel<<endl; }

	Sort_cluster(cluster_max, energy_list);
	//for(int i=0; i<n_cluster; i++){ cout<<i<<"  "<<cluster_max[i]<<"  "<<energy_list[cluster_max[i]]<<endl; }

	// gather the blocks of clusters
	int n_module_in_cluster=0;
	for(int m=0; m<n_cluster; m++){
		int k=tag_list[0][cluster_max[m]];
		int l=tag_list[1][cluster_max[m]];
		tag_list[2][cluster_max[m]]=m;
		tag_module[k][l][0]=m;
		n_module_in_cluster++;
		int a_return = Make_tag_barrel(tag_list, tag_module, k, l, m, n_module_in_cluster); //need k and l to get the neighbour, cluster overlap is inevitable
	}
	//method 1, from center block then extend to surrounding blocks
	int loop1=0;
	while(n_module_in_cluster < n_tag_barrel){ // until all blocks are tagged
		loop1++;
		if(loop1>N_loop_safety) { break; }
		for(int m=0; m<n_cluster; m++){
			for(int n=0; n<n_tag_barrel; n++){
				if(tag_list[2][n]==m){
					int k=tag_list[0][n];
					int l=tag_list[1][n];
					int a_return = Make_tag_barrel(tag_list, tag_module, k, l, m, n_module_in_cluster);
				}
			}
		}
	}
	//for(int i=0; i<n_tag_barrel; i++){ cout<<i<<"  "<<tag_list[2][i]<<"  "<<energy_list[i]<<" "<<tag_list[0][i]<<"  "<<tag_list[1][i]<<endl; }

	// gather the cluster energy
	double eloss_cluster[n_cluster]={0};
	int blocks_count[n_cluster]={0};
	for(int m=0; m<n_cluster; m++){
		for(int n=0; n<n_tag_barrel; n++){
			if(tag_list[2][n]==m){
				eloss_cluster[m] += energy_list[n];
				blocks_count[m]++;
			}
		}
	}

	//reconstruct postion
	double weight[n_tag_barrel]={0}, weight_all[n_cluster]={0}, angle_theta[n_cluster]={0}, angle_phi[n_cluster]={0};
	int max_k[n_cluster]={0};
	double max_weight[n_cluster]={0};

	for(int n=0; n<n_tag_barrel; n++){
		int m= tag_list[2][n];
		weight[n] = W0+TMath::Log(energy_list[n]/eloss_cluster[m]);
		if(weight[n]>0) {
			weight_all[m]+=weight[n];
			if(weight[n]>max_weight[m]){
				max_weight[m]= weight[n]; max_k[m]=tag_list[0][n]; //find the max to do the rotation, k is needed only
			}
		}
	}

	// check if k need to rotate, need to optimize
	bool reverse[n_cluster]={false};
	for(int m=0; m<n_cluster; m++){
		if(max_k[m]>(N_segment_barrel-Reverse_phi_k) || max_k[m]<(Reverse_phi_k)){ //0 ~ (Reverse_k-1), (N_segment_barrel-Reverse_k-1) ~ (N_segment_barrel-1)
			reverse[m]=true;
		}
	}
	for(int n=0; n<n_tag_barrel; n++){
		if(weight[n]>0) {
			int m= tag_list[2][n];
			int l= tag_list[1][n];
			int k= tag_list[0][n];
			angle_theta[m] += (fModule_theta_barrel[l] * weight[n] / weight_all[m]);
			if(reverse[m]==false){
				angle_phi[m] += (fSegment_phi_barrel[k] * weight[n] / weight_all[m]);
			}
			if(reverse[m]==true){
				double phi_new= fSegment_phi_barrel[k]+TMath::Pi(); //all the block add Pi()
				if(phi_new>(2*TMath::Pi())) { phi_new = phi_new-2*TMath::Pi(); }
				angle_phi[m] += (( phi_new ) * weight[n] / weight_all[m]);
			}
			//cout<<m<<" "<<k<<" "<<l<<"  "<<energy_list[n]<<endl;
		}
	}

	for(int m=0; m<n_cluster; m++){
		if(reverse[m]==true){
			angle_phi[m] = angle_phi[m]-TMath::Pi();
			if(angle_phi[m]< 0 ) {
				angle_phi[m]=angle_phi[m]+2*TMath::Pi();
			}
		}
	}

	double correction_par_0 = -0.0167561*TMath::Power(angle_theta[0], 3) + 0.0769354*TMath::Power(angle_theta[0], 2) -0.1204*angle_theta[0]+0.0646376;
	double correction_par_1 = -0.0167561*TMath::Power(angle_theta[1], 3) + 0.0769354*TMath::Power(angle_theta[1], 2) -0.1204*angle_theta[1]+0.0646376;
	angle_theta[0] = angle_theta[0] - correction_par_0;
	angle_theta[1] = angle_theta[1] - correction_par_1;

	TLorentzVector v4[2];
	v4[0].SetPxPyPzE(eloss_cluster[0]*TMath::Sin(angle_theta[0])*TMath::Cos(angle_phi[0]), eloss_cluster[0]*TMath::Sin(angle_theta[0])*TMath::Sin(angle_phi[0]), eloss_cluster[0]*TMath::Cos(angle_theta[0]), eloss_cluster[0]);
	v4[1].SetPxPyPzE(eloss_cluster[1]*TMath::Sin(angle_theta[1])*TMath::Cos(angle_phi[1]), eloss_cluster[1]*TMath::Sin(angle_theta[1])*TMath::Sin(angle_phi[1]), eloss_cluster[1]*TMath::Cos(angle_theta[1]), eloss_cluster[1]);

	// store data
	Store_cluster(0, n_cluster, n_tag_barrel, tag_list, energy_list, eloss_cluster, blocks_count, angle_theta, angle_phi);


}

void ChnsEmcClusterTask::Do_clustering(int detectorID)
{
	if(!(detectorID==1 || detectorID==2)) { Fatal("Do_clustering", "Wrong detector ID"); }

	// use max of array for tag_module, the redundancy content is ignored 
	//int N_segment = Max_segment, N_module = Max_module;

	int n_tag=0;
	int n_cluster=0;
	vector<int> tag_list[4]; // n_tag,k,l,m,ifmax
	vector<double> energy_list;
	vector<int> cluster_max;
	int tag_module[Max_segment][Max_module][2]={0}; //tag_module store tag_list number, and tag_list store module information too
	for(int i=0; i<fNblocks; i++){
		if(fLocationID[i]==detectorID && fElossModule[i]>Block_energy_cut){
			int k=fSegment[i];
			int l=fModule[i];
			tag_module[k][l][0]=-1; // initialize, store the cluster it belong to
			tag_module[k][l][1]=n_tag; // the No.
			tag_list[0].push_back(k);
			tag_list[1].push_back(l);
			tag_list[2].push_back(-1);
			tag_list[3].push_back(n_tag);
			energy_list.push_back(fElossModule[i]);
			if(Check_neighbour_max(detectorID, k, l)) {
				cluster_max.push_back(n_tag);
				n_cluster++;
			}
			n_tag++;
		}
	}
	if(fCout_open==true){ cout<<"N clusters: "<<n_cluster<<"  N_block: "<<n_tag<<endl; }

	Sort_cluster(cluster_max, energy_list);
	//for(int i=0; i<n_cluster; i++){ cout<<i<<"  "<<cluster_max[i]<<"  "<<energy_list[cluster_max[i]]<<endl; }

	// gather the blocks of clusters
	int n_module_in_cluster=0;
	for(int m=0; m<n_cluster; m++){
		int k=tag_list[0][cluster_max[m]];
		int l=tag_list[1][cluster_max[m]];
		tag_list[2][cluster_max[m]]=m;
		tag_module[k][l][0]=m;
		n_module_in_cluster++;
		// both e and ion use same function
		Make_tag(detectorID, tag_list, tag_module, k, l, m, n_module_in_cluster); //need k and l to get the neighbour, cluster overlap is inevitable
	}

	//method 1, from center block then extend to surrounding blocks
	int loop1=0;
	while(n_module_in_cluster < n_tag){ // until all blocks are tagged
		loop1++;
		if(loop1>N_loop_safety) { break; }
		for(int m=0; m<n_cluster; m++){
			for(int n=0; n<n_tag; n++){
				if(tag_list[2][n]==m){
					int k=tag_list[0][n];
					int l=tag_list[1][n];
					Make_tag(detectorID, tag_list, tag_module, k, l, m, n_module_in_cluster); 
				}
			}
		}
	}
	//for(int i=0; i<n_tag; i++){ cout<<i<<"  "<<tag_list[2][i]<<"  "<<energy_list[i]<<" "<<tag_list[0][i]<<"  "<<tag_list[1][i]<<endl; }

	// gather the cluster energy
	double eloss_cluster[n_cluster]={0};
	int blocks_count[n_cluster]={0};
	for(int m=0; m<n_cluster; m++){
		for(int n=0; n<n_tag; n++){
			if(tag_list[2][n]==m){
				eloss_cluster[m] += energy_list[n];
				blocks_count[m]++;
			}
		}
	}

	//reconstruct postion
	double weight[n_tag]={0}, weight_all[n_cluster]={0}, angle_x[n_cluster]={0}, angle_y[n_cluster]={0};
	int max_k[n_cluster]={0};
	double max_weight[n_cluster]={0};

	for(int n=0; n<n_tag; n++){
		int m= tag_list[2][n];
		weight[n] = W0+TMath::Log(energy_list[n]/eloss_cluster[m]);
		if(weight[n]>0) {
			weight_all[m]+=weight[n];
			if(weight[n]>max_weight[m]){
				max_weight[m]= weight[n]; max_k[m]=tag_list[0][n]; //find the max to do the rotation, k is needed only
			}
		}
	}

	for(int n=0; n<n_tag; n++){
		if(weight[n]>0) {
			int m= tag_list[2][n];
			int l= tag_list[1][n];
			int k= tag_list[0][n];
			// could use an array of angle_xy_ion[k][l][] to combine them together
			if(detectorID==1){
				angle_x[m] += (fAngle_xy_ion[k][l][1] * weight[n] / weight_all[m]);
				angle_y[m] += (fAngle_xy_ion[k][l][0] * weight[n] / weight_all[m]);
			}
			if(detectorID==2){
				angle_x[m] += (fAngle_xy_e[k][l][1] * weight[n] / weight_all[m]);
				angle_y[m] += (fAngle_xy_e[k][l][0] * weight[n] / weight_all[m]);
			}
			//cout<<m<<" "<<k<<" "<<l<<"  "<<energy_list[n]<<endl;
		}
	}

	// transform x,y angle to theta,phi, angle x mustn't be 0
	// an non-negligible error after transform for Px and Py, not Pz(transform is much direct, less calculation). Check it, mybe Bug, try to optimize
	double angle_theta[n_cluster]={0}, angle_phi[n_cluster]={0};
	for(int i=0; i<n_cluster; i++){
		double para = TMath::Sqrt(TMath::Tan(angle_x[i])*TMath::Tan(angle_x[i]) + TMath::Tan(angle_y[i])*TMath::Tan(angle_y[i]) + 1.0);
		if(angle_x[i]>0) { 
			angle_phi[i] = TMath::ATan(angle_y[i]/angle_x[i]); 
			if(angle_phi[i]<0){
				angle_phi[i] = angle_phi[i]+2*TMath::Pi();
			}
		}
		if(angle_x[i]<0) {
			angle_phi[i] = TMath::ATan(angle_y[i]/angle_x[i])+TMath::Pi(); 
		}
		if(detectorID==1) { angle_theta[i] = TMath::ACos(double(1)/para); }
		if(detectorID==2) { angle_theta[i] = TMath::ACos(double(-1)/para); }
		/*
		if(i==0) {
			TLorentzVector v1,v2;
			v1.SetPxPyPzE(eloss_cluster[0]*TMath::Tan(angle_x[0])/para, eloss_cluster[0]*TMath::Tan(angle_y[0])/para, -eloss_cluster[0]/para, eloss_cluster[0]);
			v2.SetPxPyPzE(eloss_cluster[0]*TMath::Sin(angle_theta[0])*TMath::Cos(angle_phi[0]), eloss_cluster[0]*TMath::Sin(angle_theta[0])*TMath::Sin(angle_phi[0]), eloss_cluster[0]*TMath::Cos(angle_theta[0]), eloss_cluster[0]);
			cout<<eloss_cluster[0]<<"  "<<para<<"   "<<angle_x[0]<<"  "<<angle_y[0]<<"    "<<angle_theta[0]<<"  "<<angle_phi[0]<<endl;
			cout<<"Reconst 1:  "<<v1.Px()<<"   "<<v1.Py()<<"   "<<v1.Pz()<<"   "<<v1.E()<<endl;
            cout<<"Reconst 2:  "<<v2.Px()<<"   "<<v2.Py()<<"   "<<v2.Pz()<<"   "<<v2.E()<<endl;
		}
	*/	
	}
	
	Store_cluster(detectorID, n_cluster, n_tag, tag_list, energy_list, eloss_cluster, blocks_count, angle_theta, angle_phi);

}

bool ChnsEmcClusterTask::Check_neighbour_max(int location, int k, int l)
{
	double e_block=eloss_module[location][k][l];
	// examine 8 blocks around, if any block larger than e_block, return false
	for(int i=0; i<8; i++){
		if( !Check_neighbour(i, location, k, l, e_block) ) { return false; }  // func return true if larger. if false, break and return
	}
	//satisfy all the max of 8
	return true;
}


bool ChnsEmcClusterTask::Check_neighbour(int n, int location, int k, int l, double e_block) 
{
	int N_segment=0, N_module=0;
	int k_down=k-1, k_up=k+1; //special k for barrel, the barrel always satisfy the k edge
	if(location==0) { 
		N_segment = N_segment_barrel; 
		N_module = N_module_barrel; 
		if(k==0) { k_down=N_segment-1; }
		if(k==N_segment-1) { k_up=0; } 
	}
	if(location==1) { N_segment = N_segment_hadron; N_module = N_module_hadron; }
	if(location==2) { N_segment = N_segment_e; N_module = N_module_e; }

	// if two blocks have the same energy(although very rare for doule value), neither will be max, so there is no max, it's a BUG
	switch(n){ //(k,l)
		case 0: // down down
			if(k_down<0 || l-1<0){ return true; }
			else if(eloss_module[location][k_down][l-1]<e_block) { return true; }
			break;
		case 1: // down *
			if(k_down<0){ return true; }
			else if(eloss_module[location][k_down][l]<e_block) { return true; }
			break;
		case 2: // down up
			if(k_down<0 || l+1>=N_module){ return true; } // l+1==N_module means edge, can't be larger 
			else if(eloss_module[location][k_down][l+1]<e_block) { return true; }
			break;
		case 3: // * down
			if(l-1<0){ return true; }
			else if(eloss_module[location][k][l-1]<e_block) { return true; }
			break;
		case 4: // * up
			if(l+1>=N_module){ return true; }
			else if(eloss_module[location][k][l+1]<e_block) { return true; }
			break;
		case 5: // up down
			if(k_up>=N_segment || l-1<0){ return true; } // for barrel, k_up>=N_segment never exist
			else if(eloss_module[location][k_up][l-1]<e_block) { return true; }
			break;
		case 6: // up *
			if(k_up>=N_segment){ return true; }
			else if(eloss_module[location][k_up][l]<e_block) { return true; }
			break;
		case 7: // up up
			if(k_up>=N_segment || l+1>=N_module){ return true; }
			else if(eloss_module[location][k_up][l+1]<e_block) { return true; }
			break;
	}
	return false;
}

//sort the clusters with energy
void ChnsEmcClusterTask::Sort_cluster( vector<int> &cluster_max, vector<double> energy_list)
{
	int n_cluster = cluster_max.size();
	for(int m=0; m<n_cluster-1; m++){
		for(int n=0; n<n_cluster-1-m; n++){
			if(energy_list[cluster_max[n]] < energy_list[cluster_max[n+1]] ){ //0-N_max, max to smaller
				int temp;
				temp=cluster_max[n];
				cluster_max[n]=cluster_max[n+1];
				cluster_max[n+1]=temp;
			}
		}
	}
}

int ChnsEmcClusterTask::Make_tag_barrel(vector<int> tag_list[4], int tag_module[N_segment_barrel][N_module_barrel][2], int k, int l, int m, int &n_module_in_cluster){
	int k_down=k-1, k_up=k+1, l_down=l-1, l_up=l+1;
	if(k==0) { k_down=N_segment_barrel-1; }
	if(k==N_segment_barrel-1) { k_up=0; }
	// l_down
	if(l_down>=0){
		if(tag_module[k_down][l_down][0]==-1)  { tag_module[k_down][l_down][0]=m;   tag_list[2][tag_module[k_down][l_down][1]]=m;   n_module_in_cluster++; }
		if(tag_module[k][l_down][0]==-1)       { tag_module[k][l_down][0]=m;        tag_list[2][tag_module[k][l_down][1]]=m;        n_module_in_cluster++; }
		if(tag_module[k_up][l_down][0]==-1)    { tag_module[k_up][l_down][0]=m;     tag_list[2][tag_module[k_up][l_down][1]]=m;     n_module_in_cluster++; }
	}
	// l
	if(tag_module[k_down][l][0]==-1)       { tag_module[k_down][l][0]=m;        tag_list[2][tag_module[k_down][l][1]]=m;        n_module_in_cluster++; }
	if(tag_module[k_up][l][0]==-1)         { tag_module[k_up][l][0]=m;          tag_list[2][tag_module[k_up][l][1]]=m;          n_module_in_cluster++; }
	// l_up
	if(l_up<N_module_barrel){
		if(tag_module[k_down][l_up][0]==-1){ tag_module[k_down][l_up][0]=m;     tag_list[2][tag_module[k_down][l_up][1]]=m;     n_module_in_cluster++; }
		if(tag_module[k][l_up][0]==-1)     { tag_module[k][l_up][0]=m;          tag_list[2][tag_module[k][l_up][1]]=m;          n_module_in_cluster++; }
		if(tag_module[k_up][l_up][0]==-1)  { tag_module[k_up][l_up][0]=m;       tag_list[2][tag_module[k_up][l_up][1]]=m;       n_module_in_cluster++; }
	}
	return 0;
}

// the difference of "Make_tag_ion" and "Make_tag_e" is the array tag_module, how could combine them together??? change data structure or override?
int ChnsEmcClusterTask::Make_tag(int detectorID, vector<int> tag_list[4], int tag_module[Max_segment][Max_module][2], int k, int l, int m, int &n_module_in_cluster){
	int N_segment=0, N_module=0;
	if(detectorID==1) {
		N_segment = N_segment_hadron;
		N_module = N_module_hadron;
	}
	if(detectorID==2) {
		N_segment = N_segment_e;
		N_module = N_module_e;
	}

	int k_down=k-1, k_up=k+1, l_down=l-1, l_up=l+1;
	if( k_down>=0 &&  l_down>=0 && tag_module[k_down][l_down][0]==-1 )		{tag_module[k_down][l_down][0]=m;   tag_list[2][tag_module[k_down][l_down][1]]=m;   n_module_in_cluster++; }
	if( k_down>=0 && tag_module[k_down][l][0]==-1 )							{tag_module[k_down][l][0]=m;   tag_list[2][tag_module[k_down][l][1]]=m;   n_module_in_cluster++; }
	if( k_down>=0 &&  l_up<N_module && tag_module[k_down][l_up][0]==-1 )	{tag_module[k_down][l_up][0]=m;   tag_list[2][tag_module[k_down][l_up][1]]=m;   n_module_in_cluster++; }
	if( l_down>=0 && tag_module[k][l_down][0]==-1 )							{tag_module[k][l_down][0]=m;   tag_list[2][tag_module[k][l_down][1]]=m;   n_module_in_cluster++; }
	if( l_up<N_module && tag_module[k][l_up][0]==-1 )						{tag_module[k][l_up][0]=m;   tag_list[2][tag_module[k][l_up][1]]=m;   n_module_in_cluster++; }
	if( k_up<N_segment && l_down>0 && tag_module[k_up][l_down][0]==-1 )		{tag_module[k_up][l_down][0]=m;   tag_list[2][tag_module[k_up][l_down][1]]=m;   n_module_in_cluster++; }
	if( k_up<N_segment && tag_module[k_up][l][0]==-1 )						{tag_module[k_up][l][0]=m;   tag_list[2][tag_module[k_up][l][1]]=m;   n_module_in_cluster++; }
	if( k_up<N_segment && l_up<N_module && tag_module[k_up][l_up][0]==-1 )	{tag_module[k_up][l_up][0]=m;   tag_list[2][tag_module[k_up][l_up][1]]=m;   n_module_in_cluster++; }
	return 0;
}

void ChnsEmcClusterTask::Store_cluster(int locationID, int n_cluster, int n_tag, vector<int> tag_list[4], vector<double> energy_list, double *eloss_cluster, int *blocks_count, double *angle_theta, double *angle_phi)
{
	for(int i=0; i<n_cluster; i++){
		if(eloss_cluster[i]>Cluster_enenrgy_cut){
			sNclusters++;
			sNtags+=blocks_count[i];
			sEnergyCluster.push_back(eloss_cluster[i]);
			sTheta.push_back(angle_theta[i]);
			sPhi.push_back(angle_phi[i]);
			sLocationID.push_back(locationID);
			sNblocks.push_back(blocks_count[i]);
			vector<Int_t> blockID_cluster;
			vector<Double_t> blockEnergy_cluster;
			for(int j=0; j<n_tag; j++){
				if(tag_list[2][j]==i){
					blockID_cluster.push_back(tag_list[0][j]*100+tag_list[1][j]);
					blockEnergy_cluster.push_back(energy_list[j]);
				}
			}
			sBlockID.push_back(blockID_cluster);
			sBlockEnergy.push_back(blockEnergy_cluster);
			//cout<<"eloss_cluster[i]:  "<<eloss_cluster[i]<<endl;
		}
	}
}

void ChnsEmcClusterTask::Sort_cluster_final()
{
	for(int m=0; m<sNclusters-1; m++){
        for(int n=0; n<sNclusters-1-m; n++){
            if(sEnergyCluster[n] < sEnergyCluster[n+1] ){
				swap(sEnergyCluster[n], sEnergyCluster[n+1]);
				swap(sTheta[n], sTheta[n+1]);
				swap(sPhi[n], sPhi[n+1]);
				swap(sLocationID[n], sLocationID[n+1]);
				swap(sNblocks[n], sNblocks[n+1]);
				swap(sBlockID[n], sBlockID[n+1]);
				swap(sBlockEnergy[n], sBlockEnergy[n+1]);
			}
		}	
	}
}


ClassImp(ChnsEmcClusterTask);
