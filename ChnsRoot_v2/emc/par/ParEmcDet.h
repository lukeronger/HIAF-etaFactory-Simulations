#ifndef PAREMCDET_H
#define PAREMCDET_H

#include "TMath.h"
#include "TColor.h"

// use const express, or Error.
namespace DetPar{
    const double Size=4;
	const int N_layer_barrel=240;
	const int N_layer_hadron=240;
	const double Thickness_scin = 0.15;
	const double Thickness_lead = 0.035;
	const int Layer_zoom = 20; // for draw; the reminder that divide N_layers must be 0 

	///   pesudorapidity eta 
	const double Psrad_lw_e = -3;
	const double Psrad_hg_e = -1;
	const double Psrad_lw_h = 1.5;
	const double Psrad_hg_h = 3;

    // Barrel
	const double R_barrel=90; 
	const int N_phi_barrel = int(2*TMath::Pi()*R_barrel/Size);

	// hadron endcap
    const double Zdist_hadron = 240;//cm
	const double Module_shrink_hadron = 1;  //not used actually  

	// electron forward endcap
    // crystal: CsI(Tl), radiation length: 1.86 cm/X0 == 0.538 X0/cm
    // Configuration of the crystal: 28 cm -> 15.03 X0, 30 -> 16.10, 32 -> 17.17, 34 -> 18.25, 36 -> 19.32,
    // 38 -> 20.39
    const double Crys_length = 30.0;
    const double Crys_short = 4.0;
    const double Zdist_e = 150.00;   // distance of the center of endcap front face to 

	//tags
	const int Verbose_print = 0; // 0 should be more quiet
	const bool Barrel_build = true;
	const bool Hadron_endcap_build = true;
	const bool E_endcap_build = true;
	const bool Draw_tag = false; // use to decrease the No. of shashlik layers. notice: if draw is ture, the reconstruction data will be nonsense

	//map information: detector tag: barral:0, hadron_endcap:1; e_endcap:2

	// draw color 为什么不声明const会报错？？？？？重复定义？？嵌套命名空间的问题？
	const EColor color_lead = kGreen;
	const EColor color_scin = kRed;
	const EColor color_crys = kBlue;

}
#endif
