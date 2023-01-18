#!/bin/bash

# This macro is used to generate the ROOT dictionaries
# To use the ctest launchers one needs some environment variables which
# are only present when running CMake. To have the same environment at
# the time the dictionary is build this script is used which is build
# at the time cmake runs.

# Setup the needed environment
export LD_LIBRARY_PATH=/home/eicc/software/FairSoft/install/lib::/home/hexh/simulation/ChnsRoot/buildChns/lib:/home/eicc/FairRoot/build_18.4.2/lib:/home/eicc/software/FairSoft/install/lib:/home/eicc/software/FairSoft/install/lib/Geant3-3.7.0/..
export DYLD_LIBRARY_PATH=/home/eicc/software/FairSoft/install/lib::/home/hexh/simulation/ChnsRoot/buildChns/lib:/home/eicc/FairRoot/build_18.4.2/lib:/home/eicc/software/FairSoft/install/lib:/home/eicc/software/FairSoft/install/lib/Geant3-3.7.0/..
export ROOTSYS=/home/eicc/software/FairSoft/install

/home/eicc/software/FairSoft/install/bin/rootcint -f /home/hexh/simulation/ChnsRoot/buildChns/rho/DecayTreeFitter/G__DecayTreeFitterDict.cxx -rmf /home/hexh/simulation/ChnsRoot/buildChns/lib/libDecayTreeFitter.rootmap -rml DecayTreeFitter.so  -c   -I/home/eicc/software/FairSoft/install/include/root -I/home/eicc/FairRoot/build_18.4.2/include -I/home/eicc/software/FairSoft/install/include -I/home/eicc/software/FairSoft/install/include -I/home/hexh/simulation/ChnsRoot/trackbase -I/home/hexh/simulation/ChnsRoot/ChnsData -I/home/hexh/simulation/ChnsRoot/ChnsData/TrackData -I/home/hexh/simulation/ChnsRoot/ChnsData/PidData -I/home/hexh/simulation/ChnsRoot/rho -I/home/hexh/simulation/ChnsRoot/rho/RhoBase -I/home/hexh/simulation/ChnsRoot/rho/RhoMath -I/home/hexh/simulation/ChnsRoot/rho/RhoTools -I/home/hexh/simulation/ChnsRoot/rho/RhoSelector -I/home/hexh/simulation/ChnsRoot/rho/RhoHistogram -I/home/hexh/simulation/ChnsRoot/rho/DecayTreeFitter -I/home/eicc/software/FairSoft/install/include/root -I/home/eicc/software/FairSoft/install/include ErrCode.h ChiSquare.h Configuration.h Constraint.h DecayChain.h LineTool.h SortTool.h FitParams.h Fitter.h InteractionPoint.h InternalParticle.h KalmanCalculator.h MergedConstraint.h MissingParticle.h ParticleBase.h Projection.h RecoComposite.h RecoParticle.h RecoPhoton.h RecoResonance.h RecoTrack.h RecoTrackStateProvider.h Resonance.h State.h DecayTreeFitterLinkDef.h
