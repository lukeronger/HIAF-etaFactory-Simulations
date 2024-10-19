#ifndef PAREMCRECONSTANTS_H
#define PAREMCRECONSTANTS_H

// use const express, or Error.
namespace ParRe{

	//const int MCPoints_store=10;

	const double M_particle=0;
	const double W0=4.2; //position weight
	const double Cluster_enenrgy_cut=0.01;
	const double Block_energy_cut=0.001;
	const int Reverse_k=6;
	const int N_loop_safety=6;

	const int Max_cluster=20;
	const int Max_blocks=200;
	const int Total_max=6;

	const double Deposit_ratio_shashlik=0.3297;
	const double Deposit_ratio_e=0.98;

	//digitization information
	const double n_photon_per_mev = 8540; //EJ-200  10000 photons/MeV
	const double effi_1_fiber_scintillator_ratio = 0.104;//ratio of the area of fiber to that of scintallator
	const double effi_2_trapping = 0.054;//double layer:0.054   single layer: 0.031
	const double effi_3_attenuation = 0;
	const double effi_3_length_ratio=1.0574, effi_3_radiation_length=328, effi_3_external_length=5, effi_3_reflection_ratio=0.8; //oubel layer(0.15+0.035=0.185)
	const double effi_4_sipm = 0.2;
	const double effi = effi_1_fiber_scintillator_ratio  * effi_2_trapping  * effi_3_attenuation  * effi_4_sipm;

}
#endif
