#include "ChnsEmcReadPar.h"
#include "FairParamList.h"
#include "FairDetParIo.h"
#include "FairParIo.h"
#include <iostream>

ChnsEmcReadPar::ChnsEmcReadPar(const char* name,const char* title,
			     const char* context)
: FairParGenericSet(name,title,context)
{

}

ChnsEmcReadPar::~ChnsEmcReadPar(){
	clear();
}

void ChnsEmcReadPar::clear(){
  //status = kFALSE;  ??? status???
  //resetInputVersions();
}

void ChnsEmcReadPar::printparams(){
  std::cout <<"Print"<<std::endl;
}

void ChnsEmcReadPar::putParams(FairParamList* list)
{
	if(!list) return;
	list->add("Deposit_ratio_shashlik",fDeposit_ratio_shashlik);
	list->add("Deposit_ratio_e",fDeposit_ratio_e);
	list->add("W0",fW0);
	list->add("Cluster_enenrgy_cut",fCluster_enenrgy_cut);
	list->add("Block_energy_cut",fBlock_energy_cut);
	list->add("Reverse_phi_k",fReverse_phi_k);
	list->add("N_loop_safety",fN_loop_safety);
	list->add("Max_cluster",fMax_cluster);
	list->add("Max_blocks",fMax_blocks);
	list->add("Total_max_cluster",fTotal_max_cluster);
	list->add("M_particle",fM_particle);
}

Bool_t ChnsEmcReadPar::getParams(FairParamList* list)
{
    if (!list) return kFALSE;
	if (!list->fill("Deposit_ratio_shashlik",&fDeposit_ratio_shashlik)) return kFALSE;
	if (!list->fill("Deposit_ratio_e",&fDeposit_ratio_e)) return kFALSE;
	if (!list->fill("W0",&fW0)) return kFALSE;
	if (!list->fill("Cluster_enenrgy_cut",&fCluster_enenrgy_cut)) return kFALSE;
	if (!list->fill("Block_energy_cut",&fBlock_energy_cut)) return kFALSE;
	if (!list->fill("Reverse_phi_k",&fReverse_phi_k)) return kFALSE;
	if (!list->fill("N_loop_safety",&fN_loop_safety)) return kFALSE;
	if (!list->fill("Max_cluster",&fMax_cluster)) return kFALSE;
	if (!list->fill("Max_blocks",&fMax_blocks)) return kFALSE;
	if (!list->fill("Total_max_cluster",&fTotal_max_cluster)) return kFALSE;
	if (!list->fill("M_particle",&fM_particle)) return kFALSE;
	return kTRUE;
}

ClassImp(ChnsEmcReadPar)    //???????