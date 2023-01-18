
#ifndef CHNSEMCREADPAR_H
#define CHNSEMCREADPAR_H

#include "FairParGenericSet.h"
#include "FairParamList.h"

class FairParamList;
class FairParIo;

class ChnsEmcReadPar : public FairParGenericSet
{
	public:
        ChnsEmcReadPar (const char* name="ChnsEmcReadPar",
			    const char* title="Emc cluster parameter",
			    const char* context="TestDefaultContext");
		~ChnsEmcReadPar();

		Double_t GetDeposit_ratio_shashlik() {return fDeposit_ratio_shashlik; }
		Double_t GetDeposit_ratio_e() {return fDeposit_ratio_e; }
		Double_t GetW0() {return fW0; }
		Double_t GetCluster_enenrgy_cut() {return fCluster_enenrgy_cut; }
		Double_t GetBlock_energy_cut() {return fBlock_energy_cut; }
		Int_t GetReverse_phi_k() {return fReverse_phi_k; }
		Int_t GetN_loop_safety() {return fN_loop_safety; }
		Int_t GetMax_cluster() {return fMax_cluster; }
		Int_t GetMax_blocks() {return fMax_blocks; }
		Int_t GetTotal_max_cluster() {return fTotal_max_cluster; }
		Double_t GetM_particle() {return fM_particle; }
		
		virtual void printparams();

		// Empty method, WHY is this Called in constructor(FIXME)
		virtual void clear();
		
		void putParams(FairParamList* list);
		Bool_t getParams(FairParamList* list);
	
	private :
		Double_t fDeposit_ratio_shashlik;
		Double_t fDeposit_ratio_e;
		Double_t fW0;
		Double_t fCluster_enenrgy_cut;
		Double_t fBlock_energy_cut;
		Int_t fReverse_phi_k;
		Int_t fN_loop_safety;
		Int_t fMax_cluster;
		Int_t fMax_blocks;
		Int_t fTotal_max_cluster;
		Double_t fM_particle; // particle mass, only used for gamma or electron

		ChnsEmcReadPar(const ChnsEmcReadPar&);
		ChnsEmcReadPar& operator=(const ChnsEmcReadPar&);

        ClassDef(ChnsEmcReadPar,1);
};

#endif
