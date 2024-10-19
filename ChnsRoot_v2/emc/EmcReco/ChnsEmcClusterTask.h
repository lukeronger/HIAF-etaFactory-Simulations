
#ifndef CHNSEMCCLUSTERTASK_H
#define CHNSEMCCLUSTERTASK_H

// Root includes
#include "TVector3.h"
#include "TRandom.h"
#include "TString.h"
#include "TGeoManager.h"

// framework includes
#include "FairTask.h"
//#include "FairMCTrack.h"

// Chns data file includes
//#include "ChnsEmcPoint.h"
#include "ChnsEmcDigi.h"
#include "ChnsMCTrack.h"
#include "ChnsEmcCluster.h"
//#include "ChnsGeoHandling.h"

#include "par/ParEmcDetRe.h"
#include "ChnsEmcReadPar.h"

//class ChnsEmcCluster;
class TClonesArray;

class ChnsEmcClusterTask : public FairTask
{
	public:
		/** Default constructor **/
		ChnsEmcClusterTask();

		//ChnsMvdIdealClusterTask(Double_t sx, Double_t sy, Double_t sz);

		/** Destructor **/
		virtual ~ChnsEmcClusterTask();

		//???
		ChnsEmcClusterTask(const ChnsEmcClusterTask& ) = delete;
		ChnsEmcClusterTask& operator=(const ChnsEmcClusterTask& ) = delete;

		/** Virtual method Init **/
		virtual void SetParContainers();
		virtual InitStatus Init();

		/** Virtual method Exec **/
		virtual void Exec(Option_t* opt);

		void SetPersistance(Bool_t p = kTRUE){fPersistance=p;};
		Bool_t GetPersistance() {return fPersistance;};

	private:
		Bool_t fPersistance; // switch to turn on/off storing the arrays to a file
		bool fCout_open=false;

		// user defined
		void Geometry_Init();
		void Event_Init(); //initialize the private data
        void FillBlocksData();
		void Do_clustering_barrel();
		void Do_clustering(int detectorID);
        bool Check_neighbour_max(int loaction, int k, int l);
        bool Check_neighbour(int n, int location, int k, int l, double e_block);
        void Sort_cluster( vector<int> &cluster_max, vector<double> list_energy);
		int Make_tag_barrel(vector<int> tag_list[4], int tag_module[ParDetRe::N_segment_barrel][ParDetRe::N_module_barrel][2], int k, int l, int m, int &n_module_in_cluster);
		int Make_tag(int detectorID, vector<int> tag_list[4], int tag_module[ParDetRe::Max_segment][ParDetRe::Max_module][2], int k, int l, int m, int &n_module_in_cluster);
		void Store_cluster(int locationID, int n_cluster, int n_tag, vector<int> tag_list[4], vector<double> energy_list, double *eloss_cluster, int *blocks_count, double *angle_theta, double *angle_phi);
		void Sort_cluster_final();

		/** data  **/
		//read from data file
		Int_t fNblocks;
		Int_t fNblocksBarrel;
		Int_t fNblocksIon;
		Int_t fNblocksE;
		vector<Int_t> fLocationID;
		vector<Int_t> fSegment;
		vector<Int_t> fModule;
		vector<Double_t> fElossModule;
		Double_t fElossAll;

		// store data
		Int_t sNclusters;
		Int_t sNtags;
		vector<Double_t> sEnergyCluster;
		vector<Double_t> sTheta;
		vector<Double_t> sPhi;
		vector<Int_t> sLocationID;
		vector<Int_t> sNblocks;
		vector< vector<Int_t> > sBlockID; // n_segment*100+ n_module
		vector< vector<Double_t> > sBlockEnergy;
		Double_t sElossAll;

		//temp data
		Int_t fN_tag_barrel;
		Int_t fN_tag_ion;
		Int_t fN_tag_e;
		vector<Double_t> fElossModule_barrel;
		vector<Double_t> fElossModule_ion;
		vector<Double_t> fElossModule_e;
		double eloss_module[3][ParDetRe::Max_segment][ParDetRe::Max_module]; //sometimes error about not constant (ParDetRe::Max_segment)？？？？？？？？
        //double eloss_module_ion[N_segment_hadron][N_module_ion];
        //double eloss_module_e[N_segment_e][N_module_e];
		
		// Geometry data
		double fModule_theta_barrel[ParDetRe::N_module_barrel];
		double fSegment_phi_barrel[ParDetRe::N_segment_barrel];
		double fAngle_xy_ion[ParDetRe::N_segment_hadron][ParDetRe::N_module_hadron][2];
		double fAngle_xy_e[ParDetRe::N_segment_e][ParDetRe::N_module_e][2]; //0: y-angle , 1: x-angle
	
		// Read Par
		ChnsEmcReadPar* RecoPar;
		Double_t W0;
		Double_t Cluster_enenrgy_cut;
		Double_t Block_energy_cut;
		Int_t Reverse_phi_k;
		Int_t N_loop_safety;
		Int_t Max_cluster;
		Int_t Max_blocks;
		Int_t Total_max_cluster;

		TString fBranchName;
		//ChnsGeoHandling* fGeoH;
		/** Input array of Points **/
		TClonesArray* fPointArray;
		TClonesArray* fMctruthArray;

		/** Output array of Hits **/
		TClonesArray* fHitOutputArray;

		/** Properties **/
		ChnsEmcDigi* fCurrentChnsEmcDigi;
		ChnsMCTrack* fCurrentChnsMCTrack;

		void Register();
		void Reset();
		void ProduceHits();

		ClassDef(ChnsEmcClusterTask,1); //???

};

#endif
