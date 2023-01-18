#ifndef PAREMCDETRE_H
#define PAREMCDETRE_H

#include "par/ParEmcDet.h"

// use const express, or Error.
namespace ParDetRe{

	// Shashlik Par
	const double Size_shashlik = DetPar::Size;
	const int N_layer = DetPar::N_layer_barrel; //barrel and hadron use same layers
	const double Thickness_scin = DetPar::Thickness_scin;
	const double Thickness_lead = DetPar::Thickness_lead;
	const double Length_shashlik = (Thickness_scin + Thickness_lead) * N_layer;

	//barrel
	const int N_segment_barrel = DetPar::N_phi_barrel; 
	const double Theta_bin_barrel = TMath::Pi()*2.0/N_segment_barrel;
	const int N_module_barrel = 52; //22+30
	const int N_module_minus = 22;
	const int N_module_plus = 30;
	const double R_barrel = DetPar::R_barrel;

	// ion-endcap
	const int N_module_hadron = 28*2;
	const int N_segment_hadron = N_module_hadron;
	const double Distance_hadron = DetPar::Zdist_hadron;
	const int Half_N_module_hadron = N_module_hadron/2;
	const double Theta_bin_ion = 2 * TMath::ATan((Size_shashlik * (1+ Length_shashlik/Distance_hadron) - Size_shashlik)/2.0/ Length_shashlik);

	// e-endcap
	const double Crys_length = DetPar::Crys_length;
    const double Crys_short = DetPar::Crys_short;
	const int N_module_e = 30*2;
	const int N_segment_e = N_module_e;
	const double Distance_e = DetPar::Zdist_e;
	const int Half_N_module_e = N_module_e/2;
	const double Theta_bin_e = 2 * TMath::ATan((Crys_short * (1+ Crys_length/Distance_e) - Crys_short)/2.0 / Crys_length);

	// make sure use the max!!!!!! or add func to get value?  ？？？？？
	//const int Max_segment = DetPar::N_phi_barrel; // max of three segment
	const int Max_module = 30*2; // max of three segment, if larger than 100, change the code of Store_cluster
	const int Max_segment = 141; // max of three segment； use a large number for security
	//const int Max_module = N_module_e; // max of three segment, if larger than 100, change the code of Store_cluster

	const double Z_module_barrel[N_module_plus]={2.00511, 6.02328, 10.0574, 14.1157, 18.2063, 22.3379, 26.5194, 30.7604, 35.0709, 39.4616, 43.9443, 48.5318, 53.2382, 58.0792, 63.0724, 68.2376, 73.5977, 79.1788, 85.0115, 91.1318, 97.5824, 104.415, 111.692, 119.493, 127.916, 137.089, 147.181, 158.422, 171.138, 185.81};
	// R means distance to z-axis
	const double R_module_barrel[N_module_plus]={90.0447, 90.134, 90.223, 90.3115, 90.3995, 90.4866, 90.5728, 90.6579, 90.7416, 90.8239, 90.9045, 90.9834, 91.0603, 91.1351, 91.2076, 91.2777, 91.3453, 91.4103, 91.4724, 91.5316, 91.5877, 91.6408, 91.6905, 91.7369, 91.7799, 91.8193, 91.8551, 91.8872, 91.9156, 91.9401};
	
	// x==y 
	const double X_ion[Half_N_module_hadron]={1.99993, 6.0009, 10.0041, 14.0106, 18.0216, 22.0382, 26.0615, 30.0926, 34.1327, 38.1829, 42.2445, 46.3186, 50.4065, 54.5093, 58.6282, 62.7647, 66.9199, 71.0951, 75.2918, 79.5113, 83.7551, 88.0245, 92.3211, 96.6465, 101.002, 105.39, 109.811, 114.267};

	// dz calculation: (sin(x_angle)*cos(y_angle) + sin(y_angle)) * short_size/2.0
	const double X_e[Half_N_module_e]={1.99982, 6.00231, 10.0105, 14.0272, 18.0554, 22.098, 26.1578, 30.2381, 34.3418, 38.4721, 42.6323, 46.8258, 51.0561, 55.3268, 59.6418, 64.0049, 68.4205, 72.8928, 77.4266, 82.0267, 86.6985, 91.4474, 96.2795, 101.201, 106.219, 111.342, 116.576, 121.931, 127.416, 133.043};

}
#endif
