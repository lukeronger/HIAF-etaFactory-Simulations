//**************************************************************
// Note for v1:
// Remove the useless code
// By guoaq -- Aug./5/2021
//**************************************************************

#include <iostream>
#include <execinfo.h>
#include <signal.h>
#include <stdlib.h>

#include <AbsFinitePlane.h>
#include <AbsFitterInfo.h>
#include <AbsMeasurement.h>
#include <AbsTrackRep.h>
#include <ConstField.h>
#include <DetPlane.h>
#include <Exception.h>
#include <FieldManager.h>
#include <KalmanFittedStateOnPlane.h>
#include <AbsKalmanFitter.h>
#include <KalmanFitter.h>
#include <KalmanFitterRefTrack.h>
#include <KalmanFitterInfo.h>
#include <KalmanFitStatus.h>
#include <DAF.h>
#include <GFGbl.h>
#include <MeasuredStateOnPlane.h>
#include <MeasurementOnPlane.h>
#include <FullMeasurement.h>
#include <PlanarMeasurement.h>
#include <ProlateSpacepointMeasurement.h>
#include <RectangularFinitePlane.h>
#include <ReferenceStateOnPlane.h>
#include <SharedPlanePtr.h>
#include <SpacepointMeasurement.h>
#include <StateOnPlane.h>
#include <Tools.h>
#include <TrackCand.h>
#include <TrackCandHit.h>
#include <Track.h>
#include <TrackPoint.h>
#include <WireMeasurement.h>
#include <WirePointMeasurement.h>

#include <MaterialEffects.h>
#include <RKTools.h>
#include <RKTrackRep.h>
#include <StepLimits.h>
#include <TGeoMaterialInterface.h>

#include <EventDisplay.h>

#include <HelixTrackModel.h>
#include <MeasurementCreator.h>

#include <TApplication.h>
#include <TCanvas.h>
#include <TDatabasePDG.h>
#include <TEveManager.h>
#include <TGeoManager.h>
#include <TH1D.h>
#include <TRandom.h>
#include <TStyle.h>
#include <TVector3.h>
#include <vector>

#include <TROOT.h>
#include <TFile.h>
#include <TTree.h>
#include "TDatabasePDG.h"
#include <TMath.h>
#include <TString.h>

#include <TLegend.h>
#include <TH2D.h>
#include <TF1.h>
#include <memory>


void handler(int sig) {
    void *array[10];
    size_t size;

    // get void*'s for all entries on the stack
    size = backtrace(array, 10);

    // print out all the frames to stderr
    fprintf(stderr, "Error: signal %d:\n", sig);
    backtrace_symbols_fd(array, size, 2);
    exit(1);
}

int randomPdg() {
    int pdg;

    switch(int(gRandom->Uniform(8))) {
	case 1:
	    pdg = -11; break;
	case 2:
	    pdg = 11; break;
	case 3:
	    pdg = 13; break;
	case 4:
	    pdg = -13; break;
	case 5:
	    pdg = 211; break;
	case 6:
	    pdg = -211; break;
	case 7:
	    pdg = 2212; break;
	default:
	    pdg = 211;
    }

    return pdg;
}


int randomSign() {
    if (gRandom->Uniform(1) > 0.5)
	return 1;
    return -1;
}


void smearpixel(double pixelsize, int det_id, double input_X, double input_Y, double input_Z, double &output_X, double &output_Y, double &output_Z)
{
    //for the barrel part
    if(det_id==0)
    {
	TVector3 Vec_input(input_X, input_Y, input_Z);
	double input_phi = Vec_input.Phi() + TMath::Pi(); // change to 0~2pi;
	double input_z = Vec_input.Z() + 10000;
	double input_r = Vec_input.Perp();

	double interval_phi = pixelsize/input_r; 
	double interval_z   = pixelsize;

	int index_phi = int(input_phi / interval_phi);
	int index_z   = int(input_z   / interval_z);

	double output_phi = interval_phi/2.0+interval_phi*index_phi - TMath::Pi();
	double output_z   = interval_z/2.0+interval_z*index_z - 10000;
	double output_r   = input_r;

	TVector3 Vec_output(output_r*cos(output_phi),output_r*sin(output_phi),output_z);

	output_X =Vec_output.X();
	output_Y =Vec_output.Y();
	output_Z =Vec_output.Z();
    }	

    //for the forward and backward part,  det_id from 9 to 13 : backward part, from 14 to 18 : forward part
    if(det_id==1||det_id==2)
    {
	double input_x = input_X + 10000;
	double input_y = input_Y + 10000;

	int index_x = int(input_x / pixelsize);
	int index_y = int(input_y / pixelsize);

	output_X = pixelsize/2.0 + pixelsize*index_x -10000;
	output_Y = pixelsize/2.0 + pixelsize*index_y -10000;
	output_Z = input_Z;
    }	

}


void smearpixel_gauss(double pixelsize, int det_id, double input_X, double input_Y, double input_Z, double &output_X, double &output_Y, double &output_Z)
{
    //for the barrel part
    if(det_id==0)
    {
	TVector3 Vec_input(input_X, input_Y, input_Z);
	double input_phi = Vec_input.Phi() + TMath::Pi(); // change to 0~2pi;
	double input_r = Vec_input.Perp();

	double output_phi = Vec_input.Phi() + gRandom->Gaus(0,pixelsize/(input_r)); // change to 0~2pi;


	output_X =input_r*cos(output_phi);
	output_Y =input_r*sin(output_phi);
	output_Z =input_Z + gRandom->Gaus(0,pixelsize);
    }	

    //for the forward and backward part,  det_id from 9 to 13 : backward part, from 14 to 18 : forward part
    if(det_id==1&&det_id==2)
    {
	output_X = gRandom->Gaus(0,pixelsize) + input_X;
	output_Y = gRandom->Gaus(0,pixelsize) + input_Y;
	output_Z = input_Z;
    }	
}
//---------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------

//#define VALGRIND

#ifdef VALGRIND
#include <valgrind/callgrind.h>
#else
#define CALLGRIND_START_INSTRUMENTATION
#define CALLGRIND_STOP_INSTRUMENTATION
#define CALLGRIND_DUMP_STATS
#endif

int main(int argc, char ** argv) {
    
    int nEvt    = 1000000;
    int gen_pid = 11;       //11: electron; 13: muon; 211: pion; 321: kaon; 2212: proton;
    double P_min = 0.;      // momentum range [GeV] 
    double P_max = 30.;     //
    double the_min = 0.;    // polar anle range [degree]
    double the_max = 180.;  // 
    double phi_min = 0.;    // phi angle range [degree]
    double phi_max = 360.;  //
    double Bfield  = 15.;   // B field intensity [kG]
    double pixel_size = 0.001;   // cm; size of the pixel 10 micron
    int Geo_type = 0; // 0: simplified Geo, 1: realistic Geo
    
    std::cout<<"main par is "<<argc<<std::endl;
    //                                                     1    2     3     4    5      6       7    8      9
    if(argc < 2) std::cout<<"=============================================================================="<<std::endl; 
    if(argc < 2) std::cout<<"usage: ./Eic_mvd_performance nEvt pid Bfield MinP MaxP Minthe Maxthe PixelSize Geo_type"<<std::endl; 
    if(argc < 2) std::cout<<"=============================================================================="<<std::endl; 
    if(argc >= 2) nEvt    = (int)atoi(argv[1]); 
    if(argc >= 3) gen_pid = (int)atoi(argv[2]); 
    if(argc >= 4) Bfield  = (double)atof(argv[3]);
    if(argc >= 5) P_min   = (double)atof(argv[4]);
    if(argc >= 6) P_max   = (double)atof(argv[5]);
    if(argc >= 7) the_min = (double)atof(argv[6]);
    if(argc >= 8) the_max = (double)atof(argv[7]);
    if(argc >= 10) Geo_type = (int)atoi(argv[9]);

    const char* parname;
    if(abs(gen_pid) == 11   ) parname = "el"; 
    if(abs(gen_pid) == 13   ) parname = "mu"; 
    if(abs(gen_pid) == 211  ) parname = "pi"; 
    if(abs(gen_pid) == 321  ) parname = "ka"; 
    if(abs(gen_pid) == 2212 ) parname = "pr"; 
    
    const char* geoname;
    if(Geo_type == 0   ) geoname = "SimpGeo"; 
    if(Geo_type == 1   ) geoname = "RealGeo"; 

    gRandom->SetSeed(14);
    
    // Defined by Guoaq
    const int nMaxHit = 100;
    const double maxmomentum = P_max;     // GeV
    const double resolution = 0.005;   // cm; resolution of generated measurements
    const unsigned int nMeasurements = 3;
    double BField = Bfield;       // kGauss
    //const int pdg = gen_pid;               // particle pdg code
    const int pdg = 13;               // set the default particle type
    const bool matFX = true;         // include material effects; can only be disabled for RKTrackRep!
    double momentum = 0.1;     // GeV
    const bool smearOn = true; // Switch to simulate the detector resolution
    
    if(argc >= 4) BField = (double)atof(argv[3]);
    if(argc >= 9) pixel_size = (int)atoi(argv[8]) *1E-4;//  input in micro meter, change to centi meter

    std::cout<<"Bfield is "<<BField<<" kG,  pixel size if "<<pixel_size<<" cm"<<std::endl;
    std::cout<<"parname is "<<parname<<std::endl; 
    // TString fin_name = Form("/home/guoaq/software/EiccRoot/macro/output/%s_B_%.0fkG_P_%.0f_%.0fGeV_Theta_%.0f_%.0fDeg_%i_thick_1um_%s.root",parname,Bfield,P_min,P_max,the_min,the_max,nEvt,geoname);
    // TString fout_name = Form("output/%s_B_%.0fkG_P_%.0f_%.0fGeV_Theta_%.0f_%.0fDeg_PixelSize_%.0fmicron_thick_1um_%s.root",parname,Bfield,P_min,P_max,the_min,the_max,pixel_size*10000,geoname);
    
    TString fin_name = Form("/home/guoaq/software/EiccRoot/macro/output/%s_B_%.0fkG_P_%.0f_%.0fGeV_Theta_%.0f_%.0fDeg_%i_thick_5um_%s.root",parname,Bfield,P_min,P_max,the_min,the_max,nEvt,geoname);
    TString fout_name = Form("output/%s_B_%.0fkG_P_%.0f_%.0fGeV_Theta_%.0f_%.0fDeg_PixelSize_%.0fmicron_thick_5um_%s.root",parname,Bfield,P_min,P_max,the_min,the_max,pixel_size*10000,geoname);
    
    // TString fin_name = Form("/home/guoaq/software/EiccRoot/macro/output/%s_B_%.0fkG_P_%.0f_%.0fGeV_Theta_%.0f_%.0fDeg.root",parname,Bfield,P_min,P_max,the_min,the_max);
    // TString fout_name = Form("output/%s_B_%.0fkG_P_%.0f_%.0fGeV_Theta_%.0f_%.0fDeg_PixelSize_%.0fmicron_SimpGeo.root",parname,Bfield,P_min,P_max,the_min,the_max,pixel_size*10000);
    
    // Parameter file name
    std::cout<<"input file is "<<fin_name<<std::endl;
    std::cout<<"output file is "<<fout_name<<std::endl;
    // Defined by Guoaq

    const unsigned int nEvents = nEvt;
    const double thetaDetPlane = 90;         // degree
    const double phiDetPlane = 0;         // degree

    const double resolutionWire = 5*resolution;   // cm; resolution of generated measurements
    const TVector3 wireDir(0,0,1);
    const double skewAngle(5);
    const bool useSkew = true;
    const int nSuperLayer = 10;
    const double minDrift = 0.;
    const double maxDrift = 2;
    const bool idealLRResolution = false; // resolve the l/r ambiguities of the wire measurements

    const double outlierProb = -0.1;
    const double outlierRange = 2;

    const double hitSwitchProb = -0.1; // probability to give hits to fit in wrong order (flip two hits)

    const int splitTrack = -5; //nMeasurements/2; // for track merging testing.
    const bool fullMeasurement = false; // put fit result of first tracklet as FullMeasurement into second tracklet, don't merge

    //const genfit::eFitterType fitterId = genfit::SimpleKalman;
    const genfit::eFitterType fitterId = genfit::RefKalman;
    //const genfit::eFitterType fitterId = genfit::DafRef;
    //const genfit::eFitterType fitterId = genfit::DafSimple;
    //const genfit::eMultipleMeasurementHandling mmHandling = genfit::weightedAverage;
    //const genfit::eMultipleMeasurementHandling mmHandling = genfit::unweightedClosestToReference;
    const genfit::eMultipleMeasurementHandling mmHandling = genfit::unweightedClosestToPrediction; // default one
    //const genfit::eMultipleMeasurementHandling mmHandling = genfit::weightedClosestToReference;
    //const genfit::eMultipleMeasurementHandling mmHandling = genfit::weightedClosestToPrediction;
    //const genfit::eMultipleMeasurementHandling mmHandling = genfit::unweightedClosestToReferenceWire;
    //const genfit::eMultipleMeasurementHandling mmHandling = genfit::unweightedClosestToPredictionWire;
    //const genfit::eMultipleMeasurementHandling mmHandling = genfit::weightedClosestToReferenceWire;
    //const genfit::eMultipleMeasurementHandling mmHandling = genfit::weightedClosestToPredictionWire;
    const int nIter = 20; // max number of iterations
    const double dPVal = 1.E-3; // convergence criterion
    const bool resort = true;
    const bool prefit = true; // make a simple Kalman iteration before the actual fit
    const bool refit  = false; // if fit did not converge, try to fit again
    const bool twoReps = false; // test if everything works with more than one rep in the tracks
    const bool checkPruning = true; // test pruning

    const bool smearPosMom = true;     // init the Reps with smeared pos and mom
    //const double posSmear = 10*resolution;     // cm
    const double posSmear = 5*resolution;     // 10*resolution in default cm
    const double momSmear = 2. /180.*TMath::Pi();     // 5 / 180 * pi in default rad
    const double momMagSmear = 0.1;   // 0.2 in default relative
    const double zSmearFac = 1;

    const bool debug  = false;
    const bool debug1 = false;
    const bool onlyDisplayFailed = false; // only load non-converged tracks into the display

    std::vector<genfit::eMeasurementType> measurementTypes;
    for (unsigned int i = 0; i<nMeasurements; ++i) {
	measurementTypes.push_back(genfit::eMeasurementType(i%8));
    }

    signal(SIGSEGV, handler);   // install our handler

    // init fitter
    genfit::AbsKalmanFitter* fitter = 0;
    switch (fitterId) {
	case genfit::SimpleKalman:
	    fitter = new genfit::KalmanFitter(nIter, dPVal);
	    fitter->setMultipleMeasurementHandling(mmHandling);
	    break;

	case genfit::RefKalman:
	    fitter = new genfit::KalmanFitterRefTrack(nIter, dPVal);
	    fitter->setMultipleMeasurementHandling(mmHandling);
	    break;

	case genfit::DafSimple:
	    fitter = new genfit::DAF(false);
	    break;
	case genfit::DafRef:
	    fitter = new genfit::DAF();
	    break;
    }
    fitter->setMaxIterations(nIter);


    // init MeasurementCreator
    genfit::MeasurementCreator measurementCreator;
    measurementCreator.setResolution(resolution);
    measurementCreator.setResolutionWire(resolutionWire);
    measurementCreator.setOutlierProb(outlierProb);
    measurementCreator.setOutlierRange(outlierRange);
    measurementCreator.setThetaDetPlane(thetaDetPlane);
    measurementCreator.setPhiDetPlane(phiDetPlane);
    measurementCreator.setWireDir(wireDir);
    measurementCreator.setMinDrift(minDrift);
    measurementCreator.setMaxDrift(maxDrift);
    measurementCreator.setIdealLRResolution(idealLRResolution);
    measurementCreator.setUseSkew(useSkew);
    measurementCreator.setSkewAngle(skewAngle);
    measurementCreator.setNSuperLayer(nSuperLayer);
    measurementCreator.setDebug(debug);


    // init geometry and mag. field
    new TGeoManager("Geometry", "Geane geometry");
    //TGeoManager::Import("genfitGeom.root");
    TGeoManager::Import("geofile_full.root");
    //TGeoManager::Import("genfitGeom_AllSi_v3.root");
    genfit::FieldManager::getInstance()->init(new genfit::ConstField(0.,0.,BField));
    genfit::FieldManager::getInstance()->useCache(true, 8);
    genfit::MaterialEffects::getInstance()->init(new genfit::TGeoMaterialInterface());

    const double charge = TDatabasePDG::Instance()->GetParticle(pdg)->Charge()/(3.);
    std::cout<<"particle type is 11"<<" charge is "<<charge<<std::endl;

    // init event display
#ifndef VALGRIND
    genfit::EventDisplay* display = genfit::EventDisplay::getInstance();
    display->reset();
#endif

#ifndef VALGRIND
    // create histograms
    gROOT->SetStyle("Plain");
    gStyle->SetPalette(1);
    gStyle->SetOptFit(1111);

    TH1D *hmomRes = new TH1D("hmomRes","mom res",500,-250*resolution*maxmomentum/nMeasurements,250*resolution*maxmomentum/nMeasurements);
    TH1D *hupRes = new TH1D("hupRes","u' res",500,-15*resolution/nMeasurements, 15*resolution/nMeasurements);
    TH1D *hvpRes = new TH1D("hvpRes","v' res",500,-15*resolution/nMeasurements, 15*resolution/nMeasurements);
    TH1D *huRes = new TH1D("huRes","u res",500,-15*resolution, 15*resolution);
    TH1D *hvRes = new TH1D("hvRes","v res",500,-15*resolution, 15*resolution);

    TH1D *hqopPu = new TH1D("hqopPu","q/p pull",200,-6.,6.);
    TH1D *pVal = new TH1D("pVal","p-value",100,0.,1.00000001);
    pVal->SetMinimum(0);
    
    TH1D *hupPu = new TH1D("hupPu","u' pull",200,-6.,6.);
    TH1D *hvpPu = new TH1D("hvpPu","v' pull",200,-6.,6.);
    TH1D *huPu = new TH1D("huPu","u pull",200,-6.,6.);
    TH1D *hvPu = new TH1D("hvPu","v pull",200,-6.,6.);

    TH1D *weights = new TH1D("weights","Daf vs true weights",500,-1.01,1.01);
    TH1D *trackLenRes = new TH1D("trackLenRes","(trueLen - FittedLen) / trueLen",500,-0.01,0.01);

    TH2D *hpT_residual_vs_pT = new TH2D("hpT_residual_vs_pT", "#Delta pT/pT; pT[GeV/c]; #Delta pT/pT", 15, 0.5, maxmomentum, 40, -0.04, 0.04);
    TH2D *hDCAr_vs_pT = new TH2D("hDCAr_vs_pT", "DCAr vs. p; p [GeV/c]; DCAr [cm]", 15, 0.5, maxmomentum, 100, -0.04, 0.04);
    TH2D *hDCAr2_vs_pT = new TH2D("hDCAr2_vs_pT", "DCAr vs. p; p [GeV/c]; DCAr [cm]", 15, 0.5, maxmomentum, 100, -0.04, 0.04);
    TH2D *hDCAr3_vs_pT = new TH2D("hDCAr3_vs_pT", "DCAr vs. p; p [GeV/c]; DCAr [cm]", 15, 0.5, maxmomentum, 100, -0.04, 0.04);
    TH2D *hDCAr4_vs_pT = new TH2D("hDCAr4_vs_pT", "DCAr vs. p; p [GeV/c]; DCAr [cm]", 15, 0.5, maxmomentum, 100, -0.04, 0.04);

#endif

    double maxWeight(0);
    unsigned int nTotalIterConverged(0);
    unsigned int nTotalIterNotConverged(0);
    unsigned int nTotalIterSecondConverged(0);
    unsigned int nTotalIterSecondNotConverged(0);
    unsigned int nConvergedFits(0);
    unsigned int nUNConvergedFits(0);
    unsigned int nConvergedFitsSecond(0);
    unsigned int nUNConvergedFitsSecond(0);

    CALLGRIND_START_INSTRUMENTATION;

    genfit::Track* fitTrack(nullptr);
    genfit::Track* secondTrack(nullptr);

    // read the input file
    TFile *f_data=new TFile(fin_name);
    TTree *t_data=(TTree*)f_data->Get("eiccsim");

    //int Event, nHit;
    double X[nMaxHit],Y[nMaxHit],Z[nMaxHit];
    double PX[nMaxHit],PY[nMaxHit],PZ[nMaxHit];
    
    double TruthX[nMaxHit],TruthY[nMaxHit],TruthZ[nMaxHit];
    double TruthPX[nMaxHit],TruthPY[nMaxHit],TruthPZ[nMaxHit];
    int TruthMotherID[nMaxHit];
    
    int DetID[nMaxHit];
    int NHits;

    for(int k=0;k<nMaxHit;k++)
    {
	X[k]=-100;
	Y[k]=-100;
	Z[k]=-100;
	PX[k]=-100;
	PY[k]=-100;
	PZ[k]=-100;
	DetID[k]=-100;
	
	TruthX[k]=-100;
	TruthY[k]=-100;
	TruthZ[k]=-100;
	TruthPX[k]=-100;
	TruthPY[k]=-100;
	TruthPZ[k]=-100;
	TruthMotherID[k]=-100;
    }

    t_data->SetBranchAddress("EiccMvdPoint_",             &NHits);
    t_data->SetBranchAddress("EiccMvdPoint.fX",           X);
    t_data->SetBranchAddress("EiccMvdPoint.fY",           Y);
    t_data->SetBranchAddress("EiccMvdPoint.fZ",           Z);
    t_data->SetBranchAddress("EiccMvdPoint.fPx",          PX);
    t_data->SetBranchAddress("EiccMvdPoint.fPy",          PY);
    t_data->SetBranchAddress("EiccMvdPoint.fPz",          PZ);
    t_data->SetBranchAddress("EiccMvdPoint.fDetectorID",  DetID);
    
    t_data->SetBranchAddress("MCTrack.fStartX",           TruthX);
    t_data->SetBranchAddress("MCTrack.fStartY",           TruthY);
    t_data->SetBranchAddress("MCTrack.fStartZ",           TruthZ);
    t_data->SetBranchAddress("MCTrack.fPx",               TruthPX);
    t_data->SetBranchAddress("MCTrack.fPy",               TruthPY);
    t_data->SetBranchAddress("MCTrack.fPz",               TruthPZ);
    t_data->SetBranchAddress("MCTrack.fMotherId",         TruthMotherID);

    // creat a new tree to record the output by yutie
    TFile *f_data_out = new TFile(fout_name,"recreate");
    TTree *t_out = new TTree("t_out","");
    double px_truth, py_truth, pz_truth, pt_truth, p_truth, theta_truth, eta_truth;
    double px_rec, py_rec, pz_rec, pt_rec, p_rec, theta_rec, eta_rec;
    double mom_res, mom_res_2, mom_res_3,dca_rphi, dca_z;
    double x_truth[8], y_truth[8], z_truth[8], r_truth[8], phi_truth[8], det_id[8];
    double x_rec[8], y_rec[8], z_rec[8], phi_rec[8];
    double chi2;
    int NHit;
    double qop_rec, qop_truth, charomom;
    
	
    t_out->Branch("px_truth", &px_truth, "px_truth/D");
    t_out->Branch("py_truth", &py_truth, "py_truth/D");
    t_out->Branch("pz_truth", &pz_truth, "pz_truth/D");
    t_out->Branch("pt_truth", &pt_truth, "pt_truth/D");
    t_out->Branch("p_truth", &p_truth, "p_truth/D");
    t_out->Branch("theta_truth", &theta_truth, "theta_truth/D");
    t_out->Branch("eta_truth", &eta_truth, "eta_truth/D");
    t_out->Branch("px_rec", &px_rec, "px_rec/D");
    t_out->Branch("py_rec", &py_rec, "py_rec/D");
    t_out->Branch("pz_rec", &pz_rec, "pz_rec/D");
    t_out->Branch("pt_rec", &pt_rec, "pt_rec/D");
    t_out->Branch("p_rec", &p_rec, "p_rec/D");
    t_out->Branch("theta_rec", &theta_rec, "theta_rec/D");
    t_out->Branch("eta_rec", &eta_rec, "eta_rec/D");
    t_out->Branch("mom_res", &mom_res, "mom_res/D");
    t_out->Branch("mom_res_2", &mom_res_2, "mom_res_2/D");
    t_out->Branch("mom_res_3", &mom_res_3, "mom_res_3/D");
    t_out->Branch("dca_rphi", &dca_rphi, "dca_rphi/D");
    t_out->Branch("dca_z", &dca_z, "dca_z/D");
    t_out->Branch("chi2", &chi2, "chi2/D");
    t_out->Branch("NHit", &NHit, "NHit/I");
    
    t_out->Branch("x_truth", x_truth, "x_truth[NHit]/D");
    t_out->Branch("y_truth", y_truth, "y_truth[NHit]/D");
    t_out->Branch("z_truth", z_truth, "z_truth[NHit]/D");
    t_out->Branch("r_truth", r_truth, "r_truth[NHit]/D");
    t_out->Branch("phi_truth", phi_truth, "phi_truth[NHit]/D");
    t_out->Branch("x_rec",   x_rec,   "x_rec[NHit]/D");
    t_out->Branch("y_rec",   y_rec,   "y_rec[NHit]/D");
    t_out->Branch("z_rec",   z_rec,   "z_rec[NHit]/D");
    t_out->Branch("phi_rec", phi_rec, "phi_rec[NHit]/D");
    t_out->Branch("det_id",  det_id,  "det_id[NHit]/D");

    t_out->Branch("qop_truth", &qop_truth, "qop_truth/D");
    t_out->Branch("qop_rec", &qop_rec, "qop_rec/D");
    t_out->Branch("charomom", &charomom, "charomom/D");
    
    
    
    //const unsigned int nEvents = t_data->GetEntries();
    
    int nHit = 0;	
    int nTrack = 0;	

    // main loop
    for (unsigned int iEvent=0; iEvent<nEvents; ++iEvent){

	if(debug1) std::cout<<"========= start a new event ==========================="<<std::endl;
	// create  measurement frome input file
	t_data->GetEntry(iEvent);

	nHit = 0;	
	nTrack = 0;	

	for(int ib=0; ib<nMaxHit;ib++)
	{
	    if(X[ib]!=-100) nHit++;
	    //std::cout<<"X["<<ib<<"] is "<<X[ib]<<std::endl;
	}
	
	for(int it=0; it<nMaxHit;it++)
	{
	    if(TruthX[it]!=-100) nTrack++;
	}

	// std::cout<<"found nHit is "<<nHit<<std::endl;	
	// std::cout<<"recorded nHit is "<<NHits<<std::endl;	

	if (debug || (iEvent)%100==0)
	    std::cout << "Event Nr. " << iEvent << " ";
	else std::cout << ". ";
	if (debug || (iEvent+1)%100==0)
	    std::cout << "\n";

	// clean up
	delete fitTrack;
	fitTrack = nullptr;
	delete secondTrack;
	secondTrack = nullptr;

	// The new way to get the truth vertex and momentum
        double TruPx=-100, TruPy=-100, TruPz=-100;

	for(int i=0; i<nTrack; i++)
	{
		if(TruthMotherID[i]==-1)
		{
			TruPx = TruthPX[i];
			TruPy = TruthPY[i];
			TruPz = TruthPZ[i];
		}
	}
	
	if(TruPx==-100)
	{	
		std::cout<<"no Track is found !!"<<std::endl;
		std::cout<<"nTrack is: "<<nTrack<<std::endl;
		for(int i=0; i<nTrack; i++)
		{
			std::cout<<"i "<<i<<", mother id is "<<TruthMotherID[i]<<std::endl;
		}
	}
	else
	{	
		//std::cout<<"TruPx: "<<TruPx<<",  TruPy: "<<TruPy<<", TruPz: "<<TruPz<<std::endl; 
	}

	// true start values
	// momentum  = sqrt(PX[0]*PX[0]+PY[0]*PY[0]+PZ[0]*PZ[0]);
	momentum  = sqrt(TruPx*TruPx+TruPy*TruPy+TruPz*TruPz);
	TVector3 pos(0, 0, 0);
	//TVector3 mom(1.,0,0);
	//TVector3 mom(PX[0],PY[0],PZ[0]);
	TVector3 mom(TruPx,TruPy,TruPz);
	//mom.SetPhi(gRandom->Uniform(0.,2*TMath::Pi()));
	//mom.SetTheta(theta*TMath::Pi()/180);
	//mom.SetMag(momentum);

	TMatrixDSym covM(6);
	for (int i = 0; i < 3; ++i)
	    covM(i,i) = resolution*resolution;
	for (int i = 3; i < 6; ++i)
	    covM(i,i) = pow(resolution / nMeasurements / sqrt(3), 2);

	if (debug) {
	    std::cout << "start values \n";
	    pos.Print();
	    mom.Print();
	}

	// calc helix parameters
	// genfit::HelixTrackModel* helix = new genfit::HelixTrackModel(pos, mom, charge);
	// // measurementCreator.setTrackModel(helix);

	// smeared start values
	TVector3 posM(pos);
	TVector3 momM(mom);
	if (smearPosMom) {
	    posM.SetX(gRandom->Gaus(pos.X(),posSmear));
	    posM.SetY(gRandom->Gaus(pos.Y(),posSmear));
	    posM.SetZ(gRandom->Gaus(pos.Z(),zSmearFac*posSmear));

	    momM.SetPhi(gRandom->Gaus(mom.Phi(),momSmear));
	    momM.SetTheta(gRandom->Gaus(mom.Theta(),momSmear));
	    momM.SetMag(gRandom->Gaus(mom.Mag(), momMagSmear*mom.Mag()));
	}

	// trackrep for creating measurements
	// double sign(1.);
	// if (chargeSwitchProb > gRandom->Uniform(1.))
	//     sign = -1.;
	// genfit::AbsTrackRep* rep = new genfit::RKTrackRep(sign*pdg);
	// sign = 1.;
	// if (chargeSwitchProb > gRandom->Uniform(1.))
	//     sign = -1.;
	// genfit::AbsTrackRep* secondRep = new genfit::RKTrackRep(sign*-211);

	genfit::AbsTrackRep* rep = new genfit::RKTrackRep(pdg);
	genfit::AbsTrackRep* secondRep = new genfit::RKTrackRep(pdg);
	genfit::MeasuredStateOnPlane stateRef(rep);
	
	rep->setPosMomCov(stateRef, pos, mom, covM);

	// smeared start state
	genfit::MeasuredStateOnPlane stateSmeared(rep);
	rep->setPosMomCov(stateSmeared, posM, momM, covM);

	//rep->setPropDir(1);

	if (!matFX) genfit::MaterialEffects::getInstance()->setNoEffects();

	// remember original initial state
	const genfit::StateOnPlane stateRefOrig(stateRef);

	// create smeared measurements
	//std::vector< std::vector<genfit::AbsMeasurement*> > measurements;
	std::vector<genfit::PlanarMeasurement*>  measurements;

	std::vector<bool> outlierTrue;
	//bool outlier;
	// true values for left right. 0 for non wire measurements
	std::vector<int> leftRightTrue;
	//int lr;

	//double trueLen(-1);
	/*
	   try{
	   for (unsigned int i=0; i<measurementTypes.size(); ++i){
	   trueLen = i*pointDist;

	   measurements.push_back(measurementCreator.create(measurementTypes[i], trueLen, outlier, lr));
	   outlierTrue.push_back(outlier);
	   leftRightTrue.push_back(lr);
	   }
	   assert(measurementTypes.size() == leftRightTrue.size());
	   assert(measurementTypes.size() == outlierTrue.size());
	   }
	   catch(genfit::Exception& e){
	   std::cerr<<"Exception, next track"<<std::endl;
	   std::cerr << e.what();
	   continue; // here is a memleak!
	   }
	*/

	//try{

	// create the measurement from input file
	if(nHit>=8) NHit=8;
	else NHit = nHit; // Why do I need this?
	
	for (int i = 0; i < nHit; ++i)
	{ 
	    
	    const int detId(0); // detector ID
	    int planeId(0); // detector plane ID
	    int hitId(0); // hit ID

	    //double detectorResolution(0.0045); // resolution of planar detectors！this is the place to determine the sigma of pull distribution !!!
	    double detectorResolution(0.005); // resolution of planar detectors！this is the place to determine the sigma of pull distribution !!!
	    TMatrixDSym hitCov(2);
	    hitCov.UnitMatrix();
	    hitCov *= detectorResolution*detectorResolution; // what's the role of hitCov ? -- Guoaq/2021/04/19

	    // add some planar hits to track with coordinates I just made up
	    // for the hit position at local system
	    TVectorD hitCoords(2);
	    hitCoords[0] = 0;
	    hitCoords[1] = 0;

	    genfit::PlanarMeasurement* measurement = new genfit::PlanarMeasurement(hitCoords, hitCov, detId, ++hitId, nullptr);

	    double sm_X(0), sm_Y(0), sm_Z(0);
	    //smearpixel(pixel_size, DetID[i], X[i],Y[i],Z[i],sm_X, sm_Y, sm_Z);	
	    smearpixel_gauss(pixel_size, DetID[i], X[i],Y[i],Z[i],sm_X, sm_Y, sm_Z);	
             
	    // What's that? // By Guoaq--14/July/2021
	    if(nHit<8)
	    {
		    TVector3 Vtruth(X[i],Y[i],Z[i]);
		    TVector3 Vrec(sm_X, sm_Y, sm_Z);

		    x_truth[i] = X[i];
		    y_truth[i] = Y[i];
		    z_truth[i] = Z[i];
		    r_truth[i] = Vtruth.Perp();
		    phi_truth[i] = Vtruth.Phi();
		    phi_rec[i] = Vrec.Phi();
		    x_rec[i]   = sm_X;
		    y_rec[i]   = sm_Y;
		    z_rec[i]   = sm_Z;
		    det_id[i]  = DetID[i];

	    }


	    //   O, position of the virtual plane, U and V direction of the virtual plane 
	    TVector3 O(0,0,0), U(1,0,0), V(0,1,0);
	    
	    if(smearOn)
	    {
		O.SetX(sm_X);
		O.SetY(sm_Y);
		O.SetZ(sm_Z);
	    }
	    else
	    {
		O.SetX(X[i]);
		O.SetY(Y[i]);
		O.SetZ(Z[i]);
	    }

	    if(DetID[i]==0)  // for the barrel part
	    {
		// for barrel part, V points to Z direction	
		V.SetX(0);
		V.SetY(0);
		V.SetZ(1);
		U = O.Unit().Cross(V);
	    }
	    if(DetID[i]==2) // for the backward part
	    {
		U.SetX(-1);
		U.SetY(0);
		U.SetZ(0);
	    	
		V.SetX(0);
		V.SetY(1);
		V.SetZ(0);
	    }
	    if(DetID[i]==1) // for the forward part
	    {
		U.SetX(1);
		U.SetY(0);
		U.SetZ(0);
	    	
		V.SetX(0);
		V.SetY(1);
		V.SetZ(0);
	    }
	    
	    //std::cout<<"O "<<O.X()<<", "<<O.Y()<<", "<<O.Z()<<"  U "<<U.X()<<", "<<U.Y()<<", "<<U.Z()<<" V "<<V.X()<<", "<<V.Y()<<", "<<V.Z()<<std::endl;
	    
	    // for the hit position at global system
	    measurement->setPlane(genfit::SharedPlanePtr(new genfit::DetPlane(O, U, V)), ++planeId);
	    measurements.push_back(measurement);
	    
	}

	//}
	//catch(genfit::Exception& e){
	//    std::cerr<<"Exception, next track"<<std::endl;
	//    std::cerr << e.what();
	//    continue; // here is a memleak!
	//}

	if (debug) std::cout << "... done creating measurements \n";

	if(debug1) std::cout<<"initial array"<<std::endl;
	for(int ik=0;ik<nMaxHit;ik++)
	{
	    X[ik]=-100;
	    Y[ik]=-100;
	    Z[ik]=-100;
	    PX[ik]=-100;
	    PY[ik]=-100;
	    PZ[ik]=-100;
	    DetID[ik]=-100;
	    
	    TruthX[ik]=-100;
	    TruthY[ik]=-100;
	    TruthZ[ik]=-100;
	    TruthPX[ik]=-100;
	    TruthPY[ik]=-100;
	    TruthPZ[ik]=-100;
	    TruthMotherID[ik]=-100;
	}

	// create track
	TVectorD seedState(6);
	TMatrixDSym seedCov(6);
	rep->get6DStateCov(stateSmeared, seedState, seedCov);
	
	fitTrack = new genfit::Track(rep, seedState, seedCov); //initialized with smeared rep
	secondTrack = new genfit::Track(rep->clone(), seedState, seedCov); //initialized with smeared rep
	
	if (twoReps) {
	    fitTrack->addTrackRep(secondRep);
	    secondTrack->addTrackRep(secondRep->clone());
	}
	else
	    delete secondRep;

	//if (debug) fitTrack->Print("C");

	fitTrack->checkConsistency();
	//fitTrack->addTrackRep(rep->clone()); // check if everything works fine with more than one rep

	if(debug1) std::cout<<"size of measurement is "<<measurements.size()<<std::endl;
	if(measurements.size()>8 || measurements.size()<1) continue;// is the 8 resonable ?

	// add measurements
	for(unsigned int i=0; i<measurements.size(); ++i){
	//    if (splitTrack > 0 && (int)i >= splitTrack)
	//	break;
	//    if (i>0 && hitSwitchProb > gRandom->Uniform(1.))
	//	fitTrack->insertPoint(new genfit::TrackPoint(measurements[i], fitTrack), -2);
	//    else
	//	fitTrack->insertPoint(new genfit::TrackPoint(measurements[i], fitTrack));
	    
	    fitTrack->insertPoint(new genfit::TrackPoint(measurements[i], fitTrack));
	    fitTrack->checkConsistency();
	    //if (debug) fitTrack->Print("C");
	}

	// if (splitTrack > 0) {
	//     for(unsigned int i=splitTrack; i<measurements.size(); ++i){
	// 	if (i>0 && hitSwitchProb > gRandom->Uniform(1.))
	// 	    secondTrack->insertPoint(new genfit::TrackPoint(measurements[i], secondTrack), -2);
	// 	else
	// 	    secondTrack->insertPoint(new genfit::TrackPoint(measurements[i], secondTrack));

	// 	//if (debug) fitTrack->Print("C");
	//     }
	// }

	fitTrack->checkConsistency();
	secondTrack->checkConsistency();

	//if (debug) fitTrack->Print();
	// do the fit
	
	try{
	    if (debug) std::cout<<"Starting the fitter"<<std::endl;

	    if (prefit) {
		genfit::KalmanFitter prefitter(1, dPVal);
		prefitter.setMultipleMeasurementHandling(genfit::weightedClosestToPrediction);
		prefitter.processTrackWithRep(fitTrack, fitTrack->getCardinalRep());
	    }

	    fitter->processTrack(fitTrack, resort);
	    
	    if (splitTrack > 0)
		fitter->processTrack(secondTrack, resort);

	    if (debug) std::cout<<"fitter is finished!"<<std::endl;
	}
	catch(genfit::Exception& e){
	    std::cerr << e.what();
	    std::cerr << "Exception, next track" << std::endl;
	    continue;
	}

	if (splitTrack > 0) {
	    if (debug) fitTrack->Print("C");
	    if (debug) secondTrack->Print("C");

	    if (fullMeasurement) {
		genfit::FullMeasurement* fullM = new genfit::FullMeasurement(secondTrack->getFittedState());
		fitTrack->insertPoint(new genfit::TrackPoint(fullM, fitTrack));
	    }
	    else
		fitTrack->mergeTrack(secondTrack);

	    if (debug) fitTrack->Print("C");

	    try{
		if (debug) std::cout<<"Starting the fitter"<<std::endl;
		fitter->processTrack(fitTrack, resort);
		if (debug) std::cout<<"fitter is finished!"<<std::endl;
	    }
	    catch(genfit::Exception& e){
		std::cerr << e.what();
		std::cerr << "Exception, next track" << std::endl;
		continue;
	    }
	}


	if (refit && !fitTrack->getFitStatus(rep)->isFitConverged()) {
	    std::cout<<"Trying to fit again "<<std::endl;
	    fitter->processTrack(fitTrack, resort);
	}

	if (debug) {
	    fitTrack->Print("C");
	    fitTrack->getFitStatus(rep)->Print();
	}

	fitTrack->checkConsistency();
	secondTrack->checkConsistency();

#ifndef VALGRIND
	if (!onlyDisplayFailed && iEvent < 500) {
	    std::vector<genfit::Track*> event;
	    event.push_back(fitTrack);
	    if (splitTrack > 0)
		event.push_back(secondTrack);
	    display->addEvent(event);
	}
	else if (onlyDisplayFailed &&
		(!fitTrack->getFitStatus(rep)->isFitConverged() ||
		 fitTrack->getFitStatus(rep)->getPVal() < 0.01)) {
	    // add track to event display
	    display->addEvent(fitTrack);
	}
#endif

	if (fitTrack->getFitStatus(rep)->isFitConverged()) {
	    nTotalIterConverged += static_cast<genfit::KalmanFitStatus*>(fitTrack->getFitStatus(rep))->getNumIterations();
	    nConvergedFits += 1;
	}
	else {
	    nTotalIterNotConverged += static_cast<genfit::KalmanFitStatus*>(fitTrack->getFitStatus(rep))->getNumIterations();
	    nUNConvergedFits += 1;
	}

	if (twoReps) {
	    if (fitTrack->getFitStatus(secondRep)->isFitConverged()) {
		nTotalIterSecondConverged += static_cast<genfit::KalmanFitStatus*>(fitTrack->getFitStatus(secondRep))->getNumIterations();
		nConvergedFitsSecond += 1;
	    }
	    else {
		nTotalIterSecondNotConverged += static_cast<genfit::KalmanFitStatus*>(fitTrack->getFitStatus(secondRep))->getNumIterations();
		nUNConvergedFitsSecond += 1;
	    }
	}


	// check if fit was successful
	if (! fitTrack->getFitStatus(rep)->isFitConverged()) {
	    std::cout << "Track could not be fitted successfully! Fit is not converged! \n";
	    continue;
	}


	genfit::TrackPoint* tp = fitTrack->getPointWithMeasurementAndFitterInfo(0, rep);
	if (tp == nullptr) {
	    std::cout << "Track has no TrackPoint with fitterInfo! \n";
	    continue;
	}
	genfit::KalmanFittedStateOnPlane kfsop(*(static_cast<genfit::KalmanFitterInfo*>(tp->getFitterInfo(rep))->getBackwardUpdate()));
	if (debug) {
	    std::cout << "state before extrapolating back to reference plane \n";
	    kfsop.Print();
	}

	// extrapolate back to reference plane.
	try{
	    rep->extrapolateToPlane(kfsop, stateRefOrig.getPlane());;
	    //rep->extrapolateToPoint(kfsop, TVector3(0, 0, 0),false); // Changed by Guoaq to get the DCA
	}
	catch(genfit::Exception& e){
	    std::cerr<<"Exception, next track"<<std::endl;
	    std::cerr << e.what();
	    continue;
	}

#ifndef VALGRIND
	// calculate pulls
	const TVectorD& referenceState = stateRefOrig.getState();
	const TVectorD& state = kfsop.getState();
	const TMatrixDSym& cov = kfsop.getCov();

	double pval = fitter->getPVal(fitTrack, rep);


	//assert( fabs(pval - static_cast<genfit::KalmanFitStatus*>(fitTrack->getFitStatus(rep))->getBackwardPVal()) < 1E-10 );
	//std::cout<<"ini plane O, U, and V are : ["<<stateRefOrig.getPlane()->getO().X()<<", "<<stateRefOrig.getPlane()->getO().Y()<<", "<<stateRefOrig.getPlane()->getO().Z()<<"], ["<<stateRefOrig.getPlane()->getU().X()<<", "<<stateRefOrig.getPlane()->getU().Y()<<", "<<stateRefOrig.getPlane()->getU().Z()<<"], ["<<stateRefOrig.getPlane()->getV().X()<<", "<<stateRefOrig.getPlane()->getV().Y()<<", "<<stateRefOrig.getPlane()->getV().Z()<<"], "<<std::endl;
	
	if(debug1) std::cout<<"ini plane n : ["<<stateRefOrig.getPlane()->getNormal().X()<<", "<<stateRefOrig.getPlane()->getNormal().Y()<<", "<<stateRefOrig.getPlane()->getNormal().Z()<<"] "<<std::endl;
	if(debug1) std::cout<<"\n"<<std::endl;
	if(debug1) std::cout<<"fit P is "<<charge/state[0]<<", reference P is "<<momentum<<std::endl;
	if(debug1) std::cout<<"fit up is "<<state[1]<<", reference up is "<<referenceState[1]<<std::endl;
	if(debug1) std::cout<<"fit vp is "<<state[2]<<", reference vp is "<<referenceState[2]<<std::endl;
	if(debug1) std::cout<<"\n"<<std::endl;

	//hmomRes->Fill( (charge/state[0]-momentum));
	//hmomRes->Fill( (charge/state[0]-charge/referenceState[0]));
	hmomRes->Fill( (state[0]-referenceState[0])*mom.Mag());
	hupRes->Fill(  (state[1]-referenceState[1]));
	hvpRes->Fill(  (state[2]-referenceState[2]));
	huRes->Fill(   (state[3]-referenceState[3]));
	hvRes->Fill(   (state[4]-referenceState[4]));

	hqopPu->Fill( (state[0]-referenceState[0]) / sqrt(cov[0][0]) );
	hupPu->Fill(  (state[1]-referenceState[1]) / sqrt(cov[1][1]) );
	hvpPu->Fill(  (state[2]-referenceState[2]) / sqrt(cov[2][2]) );
	huPu->Fill(   (state[3]-referenceState[3]) / sqrt(cov[3][3]) );
	hvPu->Fill(   (state[4]-referenceState[4]) / sqrt(cov[4][4]) );
	pVal->Fill(   pval);

	// Get the momentum resolution and DCA
	TVector3 GenFit_mom = kfsop.getMom();

	if(debug1) std::cout<<"true Pt is "<<mom.Pt()<<", measured Pt is "<<GenFit_mom.Pt()<<std::endl;
	hpT_residual_vs_pT->Fill(mom.Pt(),(GenFit_mom.Pt() - mom.Pt())/mom.Pt());
	hDCAr_vs_pT->Fill(mom.Mag(),kfsop.getState()[3]);
	hDCAr2_vs_pT->Fill(mom.Mag(),kfsop.getState()[4]);
         
	double Achi2  = fitTrack->getFitStatus(rep)->getChi2();
	//std::cout<<"chisq is "<<Achi2<<std::endl;
	// calculate the DCAr
	//
	
	TVector3 DCA_local(kfsop.getState()[3],kfsop.getState()[4],0);	
	DCA_local.RotateUz(GenFit_mom.Unit());

	hDCAr3_vs_pT->Fill(mom.Mag(),DCA_local.X());
	hDCAr4_vs_pT->Fill(mom.Mag(),DCA_local.Y());
	if(debug1) std::cout<<"u is "<<kfsop.getState()[3]<<" v is "<<kfsop.getState()[4]<<std::endl;
	//delete state_at_beam_line;

	//fill tree
	px_truth = mom.Px(); py_truth = mom.Py(); pz_truth = mom.Pz(); p_truth = mom.Mag(); pt_truth = mom.Pt(); theta_truth = mom.Theta(); eta_truth = mom.PseudoRapidity();
	px_rec = GenFit_mom.Px(); py_rec = GenFit_mom.Py();  pz_rec = GenFit_mom.Pz(); p_rec = GenFit_mom.Mag(); pt_rec = GenFit_mom.Pt(); theta_rec = GenFit_mom.Theta(); eta_rec = GenFit_mom.PseudoRapidity();
	mom_res = ((GenFit_mom.Mag() - mom.Mag())/mom.Mag());
	mom_res_2 = (state[0] - referenceState[0])*mom.Mag();
	mom_res_3 = (state[0] - referenceState[0])*GenFit_mom.Mag();
	qop_rec = state[0]; qop_truth = referenceState[0]; charomom = charge/GenFit_mom.Mag();
	
	dca_rphi = DCA_local.X();
	dca_z = DCA_local.Z();
	chi2 = Achi2;
	//dca_rphi = kfsop.getState()[3]; //cm
	//dca_z = kfsop.getState()[4]; //cm
	t_out->Fill();

#endif
	measurements.clear();

	if(debug1) std::cout<<"========= end an event ==========================="<<std::endl;
    }// end loop over events

    t_out->Write();
    
    delete fitTrack;
    delete secondTrack;
    delete fitter;

    CALLGRIND_STOP_INSTRUMENTATION;
    CALLGRIND_DUMP_STATS;

    std::cout<<"maxWeight = " << maxWeight << std::endl;
    std::cout<<"avg nr iterations =                     " << (double)(nTotalIterConverged + nTotalIterNotConverged)/(double)(nConvergedFits + nUNConvergedFits) << std::endl;
    std::cout<<"avg nr iterations of converged fits =   " << (double)(nTotalIterConverged)/(double)(nConvergedFits) << std::endl;
    std::cout<<"avg nr iterations of UNconverged fits = " << (double)(nTotalIterNotConverged)/(double)(nUNConvergedFits) << std::endl;
    std::cout<<"fit efficiency =                        " << (double)nConvergedFits/nEvents << std::endl;

    if (twoReps) {
	std::cout<<"second rep: \navg nr iterations =                     " << (double)(nTotalIterSecondConverged + nTotalIterSecondNotConverged)/(double)(nConvergedFitsSecond + nUNConvergedFitsSecond) << std::endl;
	std::cout<<"avg nr iterations of converged fits =   " << (double)(nTotalIterSecondConverged)/(double)(nConvergedFitsSecond) << std::endl;
	std::cout<<"avg nr iterations of UNconverged fits = " << (double)(nTotalIterSecondNotConverged)/(double)(nUNConvergedFitsSecond) << std::endl;
	std::cout<<"fit efficiency =                        " << (double)nConvergedFitsSecond/nEvents << std::endl;
    }


    //std::cout<<"avg nr iterations (2nd rep) = " << (double)nTotalIterSecond/nSuccessfullFitsSecond << std::endl;
    //std::cout<<"fit efficiency (2nd rep) = " << (double)nConvergedFitsSecond/nEvents << std::endl;


#ifndef VALGRIND


    std::cout<<"Draw histograms ..."<<std::endl;

    // fit and draw histograms
    TCanvas* c1 = new TCanvas("resolution","resolution",300*2,200*3);
    c1->Divide(2,3);

    c1->cd(1);
    hmomRes->Fit("gaus");
    hmomRes->Draw();

    c1->cd(2);
    weights->Draw();

    c1->cd(3);
    hupRes->Fit("gaus");
    hupRes->Draw();

    c1->cd(4);
    hvpRes->Fit("gaus");
    hvpRes->Draw();

    c1->cd(5);
    huRes->Fit("gaus");
    huRes->Draw();

    c1->cd(6);
    hvRes->Fit("gaus");
    hvRes->Draw();

    c1->Write();

    TCanvas* c2 = new TCanvas("pull","pull",300*2,200*3);
    c2->Divide(2,3);

    c2->cd(1);
    hqopPu->Fit("gaus");
    hqopPu->Draw();

    c2->cd(2);
    pVal->Fit("pol1");
    pVal->Draw();
    c2->cd(3);
    hupPu->Fit("gaus");
    hupPu->Draw();

    c2->cd(4);
    hvpPu->Fit("gaus");
    hvpPu->Draw();

    c2->cd(5);
    huPu->Fit("gaus");
    huPu->Draw();

    c2->cd(6);
    hvPu->Fit("gaus");
    hvPu->Draw();

    c2->Write();
    
    
    f_data_out->Close();
    
    // TCanvas* c3 = new TCanvas();
    // //c3->Divide(2,3);

    // c3->cd(1);
    // trackLenRes->Fit("gaus");
    // trackLenRes->Draw();

    //c3->Write();
/*
    // add by Guoaq
    gStyle->SetOptFit();
    gStyle->SetOptStat(000000000);

    TF1 *tf_pT_resolution = new TF1("tf_pT_resolution","sqrt([0]*[0] + x*x*[1]*[1])", 0.5, maxmomentum);
    tf_pT_resolution->SetParameters(0,0);

    std::cout<<"Draw histograms 3rd..."<<std::endl;
    TCanvas *c5 = new TCanvas("c5","c5", 800,1200);
    c5->Divide(2,4);

    c5->cd(1);
    hpT_residual_vs_pT->ProjectionY()->Draw();

    c5->cd(2);
    hDCAr_vs_pT->ProjectionY()->Draw();
    TH1D* hDCAr2_1D = hDCAr2_vs_pT->ProjectionY();
    TH1D* hDCAr3_1D = hDCAr3_vs_pT->ProjectionY();
    TH1D* hDCAr4_1D = hDCAr4_vs_pT->ProjectionY();
    hDCAr2_1D->SetLineColor(kRed);
    hDCAr3_1D->SetLineColor(kBlue);
    hDCAr4_1D->SetLineColor(kGreen);
    hDCAr2_1D->Draw("same");
    hDCAr3_1D->Draw("same");
    hDCAr4_1D->Draw("same");

    c5->cd(3);
    hpT_residual_vs_pT->Draw();

    c5->cd(4);
    hDCAr3_vs_pT->Draw();

    c5->cd(5);
    TObjArray aSlices1;
    TH1D* hpT_resi_1D =hpT_residual_vs_pT->ProjectionY("hpT_resi_1D",3,4);
    hpT_residual_vs_pT->FitSlicesY(0, 0, -1, 0, "QNR", &aSlices1); 
    //std::cout<<"aSlice "<<aSlices1[1]<<", "<<aSlices1[2]<<std::endl;

    hpT_resi_1D->SetTitle("fit result of the 3rd bin");
    hpT_resi_1D->Fit("gaus");
    hpT_resi_1D->Draw();

    c5->cd(6);
    TH1D* hDCAr33_1D = hDCAr3_vs_pT->ProjectionY("hDCAr33_1D",3,4);
    hDCAr33_1D->SetTitle("fit result of the 3rd bin");
    hDCAr33_1D->Fit("gaus");
    hDCAr33_1D->Draw();


    c5->cd(7);
    hpT_residual_vs_pT->FitSlicesY();
    TH1D *hpT_resolution_vs_pT = (TH1D*)gDirectory->Get("hpT_residual_vs_pT_2");
    hpT_resolution_vs_pT->SetTitle("GenFit: #sigma_{p_{T}}/p_{T}; p_{T}[GeV/c]; #sigma_{p_{T}}/p_{T}");
    hpT_resolution_vs_pT->SetMarkerStyle(20);
    hpT_resolution_vs_pT->Draw("e");
    //hpT_resolution_vs_pT->Fit(tf_pT_resolution);
    c5->cd(8);
    hDCAr_vs_pT->FitSlicesY();
    hDCAr2_vs_pT->FitSlicesY();
    hDCAr3_vs_pT->FitSlicesY();
    hDCAr4_vs_pT->FitSlicesY();
    TH1D *hDCAr_resolution_vs_pT = (TH1D*) gDirectory->Get("hDCAr_vs_pT_2");
    TH1D *hDCAr2_resolution_vs_pT = (TH1D*) gDirectory->Get("hDCAr2_vs_pT_2");
    TH1D *hDCAr3_resolution_vs_pT = (TH1D*) gDirectory->Get("hDCAr3_vs_pT_2");
    TH1D *hDCAr4_resolution_vs_pT = (TH1D*) gDirectory->Get("hDCAr4_vs_pT_2");
    hDCAr_resolution_vs_pT->SetTitle("GenFit: #sigma_{DCAr} [cm]; p [GeV/c]; #sigma_{DCAr}");
    hDCAr_resolution_vs_pT->SetMarkerStyle(20);
    hDCAr2_resolution_vs_pT->SetMarkerStyle(20);
    hDCAr3_resolution_vs_pT->SetMarkerStyle(20);
    hDCAr4_resolution_vs_pT->SetMarkerStyle(20);
    hDCAr2_resolution_vs_pT->SetMarkerColor(kRed);
    hDCAr3_resolution_vs_pT->SetMarkerColor(kBlue);
    hDCAr4_resolution_vs_pT->SetMarkerColor(kGreen);
    hDCAr_resolution_vs_pT->SetMinimum(0);
    hDCAr_resolution_vs_pT->Draw("e");
    hDCAr2_resolution_vs_pT->Draw("e,same");
    hDCAr3_resolution_vs_pT->Draw("e,same");
    hDCAr4_resolution_vs_pT->Draw("e,same");
    //hDCAr_resolution_vs_pT->Fit(tf_pT_resolution);


    TLegend *leg =new TLegend(0.65,0.9,0.9,0.7);
    leg->AddEntry(hDCAr_resolution_vs_pT,   "u ",  "p");
    leg->AddEntry(hDCAr2_resolution_vs_pT,   "v",    "p");
    leg->AddEntry(hDCAr3_resolution_vs_pT,    "x","p");
    leg->AddEntry(hDCAr4_resolution_vs_pT,  "y",  "p");
    leg->SetFillColor(0);
    leg->Draw();


    c5->Print("pT_DCA_resolution.root");
    //delete leg;
    */
	// clean up
	// delete hmomRes;
	// delete hupRes;
	// delete hvpRes ;
	// delete huRes ; 
	// delete hvRes ;
	// delete hqopPu ;
	// delete pVal ;
	// delete hupPu ;
	// delete hvpPu ;
	// delete huPu ;
	// delete hvPu ;
	// delete weights;
	// delete trackLenRes;
	// delete hpT_residual_vs_pT ;
	// delete hDCAr_vs_pT  ; 
	// delete hDCAr2_vs_pT ;
	// delete hDCAr3_vs_pT ;
	// delete hDCAr4_vs_pT ;
	// delete resiX_pixel ;
	// delete resiY_pixel ;
	// delete resiZ_pixel ;
	// delete f_data;

	if (debug) std::cout<<"... done"<<std::endl;
    // open event display
    display->setOptions("ABDEFHMPT"); // G show geometry
    if(matFX) display->setOptions("ABDEFGHMPT"); // G show geometry
    //display->open();


#endif


}
