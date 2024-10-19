/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/

// -------------------------------------------------------------------------
// -----                    ChnsPipe  file                               -----
// -----                Created by M. Al-Turany  June 2014             -----
// -------------------------------------------------------------------------

#include "ChnsPipe.h"

#include <TGeoManager.h>
#include <TGeoMaterial.h>
#include <TGeoMedium.h>
#include <TGeoPcon.h>
#include "TGeoTorus.h"
#include <TGeoTube.h>
#include <TList.h>
#include <TObjArray.h>


ChnsPipe::~ChnsPipe() {}
ChnsPipe::ChnsPipe()
    : FairModule()
{}

ChnsPipe::ChnsPipe(const char* name, const char* title)
    : FairModule(name, title)
{}

ChnsPipe::ChnsPipe(const ChnsPipe& right)
    : FairModule(right)
{}

// -----  ConstructGeometry  --------------------------------------------------
void ChnsPipe::ConstructGeometry()
{
    TGeoVolume* top = gGeoManager->GetTopVolume();

    
    //TGeoMedium* Carbon = gGeoManager->GetMedium("C");
    TGeoMedium* Carbon = gGeoManager->GetMedium("carbon");
    if (Carbon == 0) {
        TGeoMaterial* matCarbon = new TGeoMaterial("C", 12.011, 6.0, 2.265);
        Carbon = new TGeoMedium("C", 3, matCarbon);
    }

    TGeoMaterial* matVacuum = new TGeoMaterial("Vacuum", 0, 0, 0);
    TGeoMedium* Vacuum = new TGeoMedium("Vacuum", 4, matVacuum);

    Int_t nSects = 2;
    Double_t z[] = {-500, 600};   // in cm
    Double_t r[] = {3, 3};    // in cm
    Double_t Thickness = 0.05;    // thickness of beam pipe [cm]
    TGeoPcon* shape = new TGeoPcon(0., 360., nSects);
    for (Int_t iSect = 0; iSect < nSects; iSect++) {
        shape->DefineSection(iSect, z[iSect], r[iSect], r[iSect] + Thickness);
    }

    // ---> Volume
    TGeoVolume* pipe = new TGeoVolume("ChnsPipe", shape, Carbon);

    // --Now create the same but diameter less by Thikness and vacuum instead of Carbon
    TGeoPcon* Vshape = new TGeoPcon(0., 360., nSects);
    for (Int_t iSect = 0; iSect < nSects; iSect++) {
        Vshape->DefineSection(iSect, z[iSect], r[iSect], r[iSect]);
    }

    // ---> Volume
    TGeoVolume* Vpipe = new TGeoVolume("ChnsPipe", shape, Vacuum);

    top->AddNode(pipe, 1);
    top->AddNode(Vpipe, 1);


    //below is the hard-code of the beam pipe. yutie-2020-03-22
    //add chicane in the electron far-forward area

    TGeoCombiTrans *TransRotMatrix;

    Double_t parPipeLeft_chicane_1[9] = { 0., 360., 2,
                               -800.,  7.9, 8.,
                               -300.,  7.9, 8.};

    TGeoPcon *pipeLeft_chicane_1   = new TGeoPcon(parPipeLeft_chicane_1);
    TGeoVolume *volPipeLeft_chicane_1       = new TGeoVolume("PipeLeft_chicane_1",       pipeLeft_chicane_1,       Carbon);

    //the following chicane parameters are abitrary chosen. They must be studied carefully later!!!
    double r_transition_part = 7500; // cm
    double phi_transition_part = 2.5; // degree    //a dipole of 3 meter long!
    double length_after_transition_part_1_3 = 500; //cm
    double length_after_transition_part_2_4 = 500; //cm
    double z_chicane = -800; //cm

    double x_chicane_part_1 = -1*r_transition_part;
    double y_chicane_part_1 = 0;
    double z_chicane_part_1 = z_chicane;

    double x_chicane_part_2 = -1*r_transition_part*(1-cos(phi_transition_part/57.2958)) - length_after_transition_part_1_3 * 1 * sin(phi_transition_part/57.2958);
    double y_chicane_part_2 = 0;
    double z_chicane_part_2 = z_chicane_part_1 - r_transition_part * sin(phi_transition_part/57.2958) - length_after_transition_part_1_3 * 1 * cos(phi_transition_part/57.2958);

    double x_chicane_part_3 = x_chicane_part_2 + r_transition_part * cos(phi_transition_part/57.2958) ;
    double y_chicane_part_3 = 0;
    double z_chicane_part_3 = z_chicane_part_2 - r_transition_part * sin(phi_transition_part/57.2958);

    double x_chicane_part_4 = x_chicane_part_3 - r_transition_part;
    double y_chicane_part_4 = 0;
    double z_chicane_part_4 = z_chicane_part_3 - length_after_transition_part_2_4; // - r_transition_part * sin(phi_transition_part/57.2958);

    double x_chicane_part_5 = x_chicane_part_3;
    double y_chicane_part_5 = 0;
    double z_chicane_part_5 = z_chicane_part_4;

    double x_chicane_part_6 = x_chicane_part_2 + length_after_transition_part_1_3 * sin(phi_transition_part/57.2958);
    double y_chicane_part_6 = 0;
    double z_chicane_part_6 = z_chicane_part_5 - length_after_transition_part_1_3*cos(phi_transition_part/57.2958) - r_transition_part * sin(phi_transition_part/57.2958);

    double x_chicane_part_7 = x_chicane_part_1;
    double y_chicane_part_7 = 0;
    double z_chicane_part_7 = z_chicane_part_6 - r_transition_part * sin(phi_transition_part/57.2958);

    double x_chicane_part_8 = 0;
    double y_chicane_part_8 = 0;
    double z_chicane_part_8 = z_chicane_part_7 - length_after_transition_part_2_4;


    std::cout<<"pipe:   "<<x_chicane_part_1<<" "<<z_chicane_part_1<<"   -  "<<x_chicane_part_2<<" "<<z_chicane_part_2<<"   ==  "<<x_chicane_part_3<<" "<<z_chicane_part_3<<std::endl;

//    TGeoTorus *pipe_chicane_transition_part = new TGeoTorus(r_transition_part, 7.9, 8, 360-phi_transition_part, phi_transition_part);

    //make the transition part larger..
    TGeoTorus *pipe_chicane_transition_part = new TGeoTorus(r_transition_part, 7.9, 20, 360-phi_transition_part, phi_transition_part);

    TGeoVolume *vol_pipe_chicane_transition_part = new TGeoVolume("pipe_chicane_transition_part", pipe_chicane_transition_part,     Carbon);


    vol_pipe_chicane_transition_part->SetLineColor(5);
    vol_pipe_chicane_transition_part->SetFillColor(5);
    vol_pipe_chicane_transition_part->SetFillStyle(1001);



    Double_t parPipeLeft_chicane_2[9] = { 0., 360., 2,
                                   0.,  7.9, 8.,
                                   length_after_transition_part_1_3,  7.9, 8.};
    TGeoPcon *pipe_chicane_after_transition_part_1_3 = new TGeoPcon(parPipeLeft_chicane_2);

    TGeoVolume *vol_pipe_chicane_after_transition_part_1_3 = new TGeoVolume("pipe_chicane_after_transition_part_1_3", pipe_chicane_after_transition_part_1_3, Carbon);

    Double_t parPipeLeft_chicane_3[9] = { 0., 360., 2,
                                   0., 7.9, 8.,
                                   length_after_transition_part_2_4, 7.9, 8.};
    TGeoPcon *pipe_chicane_after_transition_part_2_4 = new TGeoPcon(parPipeLeft_chicane_3);
    TGeoVolume *vol_pipe_chicane_after_transition_part_2_4 = new TGeoVolume("pipe_chicane_after_transition_part_2_4", pipe_chicane_after_transition_part_2_4, Carbon);

    TGeoRotation rotVolume, rotVolume_2, rotVolume_3, rotVolume_5, rotVolume_6, rotVolume_7;
    rotVolume.RotateX(90.);
    rotVolume_2.RotateY(phi_transition_part);
    rotVolume_3.RotateX(90.); rotVolume_3.RotateY(180.);
    rotVolume_5.RotateX(90.); rotVolume_5.RotateZ(180.);
    rotVolume_6.RotateY(-1*phi_transition_part); //rotVolume_6.RotateX(180.);
    rotVolume_7.RotateX(90.); rotVolume_7.RotateX(180.);
    TransRotMatrix = new TGeoCombiTrans(-200.,0.,-1500,new TGeoRotation(rotVolume));
    top->AddNode(volPipeLeft_chicane_1, 0);
    top->AddNode(vol_pipe_chicane_transition_part, 1, new TGeoCombiTrans(x_chicane_part_1, y_chicane_part_1, z_chicane_part_1, new TGeoRotation(rotVolume)));
    top->AddNode(vol_pipe_chicane_after_transition_part_1_3, 2, new TGeoCombiTrans(x_chicane_part_2, y_chicane_part_2, z_chicane_part_2, new TGeoRotation(rotVolume_2)));
    top->AddNode(vol_pipe_chicane_transition_part, 3, new TGeoCombiTrans(x_chicane_part_3, y_chicane_part_3, z_chicane_part_3, new TGeoRotation(rotVolume_3)));
    top->AddNode(vol_pipe_chicane_after_transition_part_2_4, 4, new TGeoTranslation(x_chicane_part_4, y_chicane_part_4, z_chicane_part_4));
    top->AddNode(vol_pipe_chicane_transition_part, 5, new TGeoCombiTrans(x_chicane_part_5, y_chicane_part_5, z_chicane_part_5, new TGeoRotation(rotVolume_5)));
    top->AddNode(vol_pipe_chicane_after_transition_part_1_3, 6, new TGeoCombiTrans(x_chicane_part_6, y_chicane_part_6, z_chicane_part_6, new TGeoRotation(rotVolume_6)));
    top->AddNode(vol_pipe_chicane_transition_part, 7, new TGeoCombiTrans(x_chicane_part_7, y_chicane_part_7, z_chicane_part_7, new TGeoRotation(rotVolume_7)));
    top->AddNode(vol_pipe_chicane_after_transition_part_2_4, 8, new TGeoTranslation(x_chicane_part_8, y_chicane_part_8, z_chicane_part_8));


    //electron beam in the right side
    Double_t parPipeRight_electron_beam[9] = { 0., 360., 2,
                               500 ,  7.9, 8.,
                               3500,  7.9, 8.};
    TGeoPcon *pipeRight_electron_beam   = new TGeoPcon(parPipeRight_electron_beam);
    TGeoVolume *volPipeRight_electron_beam  = new TGeoVolume("PipeRight_electron_beam",       pipeRight_electron_beam,       Carbon);
    top->AddNode(volPipeRight_electron_beam, 9);


    //ion beam pipe, left part
    //-3300  --> -300  ion_pipe_left part
    //-300   -->  500  middle_ion_beam
    //  500  --> 1500  right_ion_beam_part_1
    //  1500 --> 1???  transition part in dipole
    //  1??? --> 2500  right_ion_beam_part_2
    //  2500 --> 2???  transition part in dipole
    //  2??? --> 4000  right_ion_beam_part_3

    double cross_angle = 0.055*57.2958;  //degree

    double length_ion_beam_left_part_1 = 3000;// 20 m
    double z_pos_beam_left_part_1 = -300;
    Double_t parPipeLeft_ion_beam[9] = { 0., 360., 2,
                               -1*length_ion_beam_left_part_1 + z_pos_beam_left_part_1 ,  7.9, 8.,
                               z_pos_beam_left_part_1,  7.9, 8.};

    double length_ion_beam_right_part_1 = 1000; //10 m
    double z_pos_beam_right_part_1 = 500;
    Double_t parPipeRight_ion_beam[9] = { 0., 360., 2,
                               z_pos_beam_right_part_1 ,  7.9, 8.,
                               length_ion_beam_right_part_1 + z_pos_beam_right_part_1,  7.9, 8.};

    Double_t parPipeMiddle_ion_beam[9] = { 0., 360., 2,
                               z_pos_beam_left_part_1 ,  3.9, 4.,
                               z_pos_beam_right_part_1,  3.9, 4.};


    //the transition part in the dipole at the ion forward direction
    double r_transition_part_ion = 7500; // cm
    double phi_transition_part_ion = cross_angle; // degree    //a dipole of ? meter long!
    double length_after_transition_part_ion_1 = 1500; //cm
    double length_after_transition_part_ion_2 = 1500; //cm
    double z_transition_part_ion_1 = 1500; //cm
    double x_transition_part_ion_1 = r_transition_part_ion - (z_pos_beam_right_part_1 + length_ion_beam_right_part_1)*sin(cross_angle/57.2958);

    double z_pos_ion_beam_right_part_2 = (length_ion_beam_right_part_1 + z_pos_beam_right_part_1) * cos(cross_angle/57.2958);
    double x_pos_ion_beam_right_part_2 = -(length_ion_beam_right_part_1 + z_pos_beam_right_part_1) * sin(cross_angle/57.2958);
    double length_ion_beam_right_part_2 = 1000;
    Double_t parPipeRight_ion_beam_part_2[9] = { 0., 360., 2,
                               z_pos_ion_beam_right_part_2,  7.9, 8.,
                               z_pos_ion_beam_right_part_2 + length_ion_beam_right_part_2,  7.9, 8.};


    double x_transition_part_ion_2 = -r_transition_part_ion - (z_pos_beam_right_part_1 + length_ion_beam_right_part_1)*sin(cross_angle/57.2958);
    double z_transition_part_ion_2 = z_transition_part_ion_1 + length_ion_beam_right_part_2;

    double z_pos_ion_beam_right_part_3 = z_pos_ion_beam_right_part_2+length_ion_beam_right_part_2;
    double x_pos_ion_beam_right_part_3 = x_pos_ion_beam_right_part_2;
    double length_ion_beam_right_part_3 = 1000;
    Double_t parPipeRight_ion_beam_part_3[9] = { 0., 360., 2,
                               0,  7.9, 8.,
                               length_ion_beam_right_part_3,  7.9, 8.};

    TGeoPcon *pipeLeft_ion_beam   = new TGeoPcon(parPipeLeft_ion_beam);
    TGeoVolume *volPipeLeft_ion_beam  = new TGeoVolume("PipeLeft_ion_beam",       pipeLeft_ion_beam,       Carbon);

    TGeoPcon *pipeRight_ion_beam   = new TGeoPcon(parPipeRight_ion_beam);
    TGeoVolume *volPipeRight_ion_beam  = new TGeoVolume("PipeRight_ion_beam",       pipeRight_ion_beam,       Carbon);

    TGeoPcon *pipeMiddle_ion_beam   = new TGeoPcon(parPipeMiddle_ion_beam);
    TGeoVolume *volPipeMiddle_ion_beam  = new TGeoVolume("PipeMiddle_ion_beam",       pipeMiddle_ion_beam,       Carbon);

    TGeoTorus *pipe_transition_part_ion = new TGeoTorus(r_transition_part_ion, 7.9, 25, 360-phi_transition_part_ion, phi_transition_part_ion);
    TGeoVolume *vol_pipe_transition_part_ion = new TGeoVolume("pipe_transition_part_ion", pipe_transition_part_ion,       Carbon);


    TGeoPcon *pipeRight_ion_beam_part_2   = new TGeoPcon(parPipeRight_ion_beam_part_2);
    TGeoVolume *volPipeRight_ion_beam_part_2  = new TGeoVolume("PipeRight_ion_beam_part_2",       pipeRight_ion_beam_part_2,       Carbon);

    TGeoPcon *pipeRight_ion_beam_part_3   = new TGeoPcon(parPipeRight_ion_beam_part_3);
    TGeoVolume *volPipeRight_ion_beam_part_3  = new TGeoVolume("PipeRight_ion_beam_part_3",       pipeRight_ion_beam_part_3,       Carbon);

    TGeoRotation rotVolume_ion_0, rotVolume_ion_1, rotVolume_ion_2;
    rotVolume_ion_0.RotateY(-1*cross_angle);
    rotVolume_ion_1.RotateX(90.); rotVolume_ion_1.RotateY(180.);
    rotVolume_ion_2.RotateX(90.); rotVolume_ion_2.RotateX(180.);


    top->AddNode(volPipeLeft_ion_beam, 0, new TGeoCombiTrans(0,0,0, new TGeoRotation(rotVolume_ion_0)));
    top->AddNode(volPipeRight_ion_beam, 0, new TGeoCombiTrans(0,0,0, new TGeoRotation(rotVolume_ion_0)));
    top->AddNode(volPipeMiddle_ion_beam, 0, new TGeoCombiTrans(0,0,0, new TGeoRotation(rotVolume_ion_0)));

    top->AddNode(vol_pipe_transition_part_ion, 0, new TGeoCombiTrans(x_transition_part_ion_1, 0, z_transition_part_ion_1, new TGeoRotation(rotVolume_ion_1)));

    top->AddNode(vol_pipe_transition_part_ion, 1, new TGeoCombiTrans(x_transition_part_ion_2, 0, z_transition_part_ion_2, new TGeoRotation(rotVolume_ion_2)));

    top->AddNode(volPipeRight_ion_beam_part_2, 0, new TGeoTranslation(x_pos_ion_beam_right_part_2, 0, 0));
    top->AddNode(volPipeRight_ion_beam_part_3, 0, new TGeoCombiTrans(x_pos_ion_beam_right_part_3,0,z_pos_ion_beam_right_part_3, new TGeoRotation(rotVolume_ion_0)));


}
// ----------------------------------------------------------------------------

FairModule* ChnsPipe::CloneModule() const { return new ChnsPipe(*this); }

ClassImp(ChnsPipe);
