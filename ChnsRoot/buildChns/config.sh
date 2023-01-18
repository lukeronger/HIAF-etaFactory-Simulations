#!/bin/bash

export Linux_Flavour_="Ubuntu 18.04.6 LTS"
export System_="x86_64"
. /home/hexh/simulation/ChnsRoot/buildChns/check_system.sh
if [ $same_system -eq 1 ]; then
	export SIMPATH="/home/eicc/software/FairSoft/install"
	export ROOTSYS="/home/eicc/software/FairSoft/install"
	export FAIRROOTPATH="/home/eicc/FairRoot/build_18.4.2/"
	if (true); then
		export Geant4_INCLUDE_DIRS="/home/eicc/software/FairSoft/install/include/Geant4"
		export Geant4VMC_INCLUDE_DIRS="/home/eicc/software/FairSoft/install/include/geant4vmc:/home/eicc/software/FairSoft/install/include/g4root"
		export Geant4VMC_LIBRARY_DIR="/home/eicc/software/FairSoft/install/lib"
		export Geant4VMC_MACRO_DIR="Geant4VMC_MACRO_DIR-NOTFOUND"
		export PLUTO_LIBRARY_DIR=""
		export PLUTO_INCLUDE_DIR=""
		export PYTHIA6_LIBRARY_DIR="/home/eicc/software/FairSoft/install/lib"
		export Geant3_INCLUDE_DIRS="/home/eicc/software/FairSoft/install/include/TGeant3"
		export G3SYS=""
		export Geant3_LIBRARY_DIR="/home/eicc/software/FairSoft/install/lib"
		export USE_VGM="1"
		export PYTHIA8DATA="/home/eicc/software/FairSoft/install/share/Pythia8/xmldoc"
		export CLASSPATH=""

		####################### Create the data set variables for Geant4 #############
export G4NEUTRONHPDATA=/home/eicc/software/FairSoft/install/share/Geant4-10.6.2/data/G4NDL4.6
export G4LEDATA=/home/eicc/software/FairSoft/install/share/Geant4-10.6.2/data/G4EMLOW7.9.1
export G4LEVELGAMMADATA=/home/eicc/software/FairSoft/install/share/Geant4-10.6.2/data/PhotonEvaporation5.5
export G4RADIOACTIVEDATA=/home/eicc/software/FairSoft/install/share/Geant4-10.6.2/data/RadioactiveDecay5.4
export G4PARTICLEXSDATA=/home/eicc/software/FairSoft/install/share/Geant4-10.6.2/data/G4PARTICLEXS2.1
export G4PIIDATA=/home/eicc/software/FairSoft/install/share/Geant4-10.6.2/data/G4PII1.3
export G4REALSURFACEDATA=/home/eicc/software/FairSoft/install/share/Geant4-10.6.2/data/RealSurface2.1.1
export G4SAIDXSDATA=/home/eicc/software/FairSoft/install/share/Geant4-10.6.2/data/G4SAIDDATA2.0
export G4ABLADATA=/home/eicc/software/FairSoft/install/share/Geant4-10.6.2/data/G4ABLA3.1
export G4INCLDATA=/home/eicc/software/FairSoft/install/share/Geant4-10.6.2/data/G4INCL1.0
export G4ENSDFSTATEDATA=/home/eicc/software/FairSoft/install/share/Geant4-10.6.2/data/G4ENSDFSTATE2.2
##############################################################################

	fi
	export Geant3_INCLUDE_DIRS="/home/eicc/software/FairSoft/install/include/TGeant3"
	export ROOT_LIBRARY_DIR="/home/eicc/software/FairSoft/install/lib"
	export ROOT_LIBRARIES="-L/home/eicc/software/FairSoft/install/lib -lGui -lCore -lImt -lRIO -lNet -lHist -lGraf -lGraf3d -lGpad -lROOTVecOps -lTree -lTreePlayer -lRint -lPostscript -lMatrix -lPhysics -lMathCore -lThread -lMultiProc -lROOTDataFrame -Wl,-rpath,/home/eicc/software/FairSoft/install/lib -pthread -lm -ldl -rdynamic"
	export ROOT_INCLUDE_DIR="/home/eicc/software/FairSoft/install/include/root"
	export ROOT_INCLUDE_PATH="/home/eicc/software/FairSoft/install/include/TGeant3:/home/eicc/FairRoot/build_18.4.2/include"
	export VMCWORKDIR="/home/hexh/simulation/ChnsRoot"
	export FAIRLIBDIR="/home/hexh/simulation/ChnsRoot/buildChns/lib"
	export PYTHONPATH="/home/hexh/simulation/ChnsRoot/python:/home/eicc/software/FairSoft/install/lib:/home/eicc/software/FairSoft/install/lib/root:/home/eicc/software/FairSoft/install/lib/Geant4:/home/eicc/software/FairSoft/install/lib/g4py"
	case $1 in
		-a | --append )
			export DYLD_LIBRARY_PATH=$DYLD_LIBRARY_PATH:""
			export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:"/home/hexh/simulation/ChnsRoot/buildChns/lib:/home/eicc/FairRoot/build_18.4.2/lib:/home/eicc/software/FairSoft/install/lib:/home/eicc/software/FairSoft/install/lib/Geant3-3.7.0/.."
			export PATH=$PATH:"/home/eicc/software/FairSoft/install/bin:/home/eicc/software/cmake/bin:/usr/local/cuda-10.1/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin"
			;;
		-p | --prepend )
			export DYLD_LIBRARY_PATH="":$DYLD_LIBRARY_PATH
			export LD_LIBRARY_PATH="/home/hexh/simulation/ChnsRoot/buildChns/lib:/home/eicc/FairRoot/build_18.4.2/lib:/home/eicc/software/FairSoft/install/lib:/home/eicc/software/FairSoft/install/lib/Geant3-3.7.0/..":$LD_LIBRARY_PATH
			export PATH="/home/eicc/software/FairSoft/install/bin:/home/eicc/software/cmake/bin:/usr/local/cuda-10.1/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin":$PATH
			;;
		* )
			export DYLD_LIBRARY_PATH=""
			export LD_LIBRARY_PATH="/home/hexh/simulation/ChnsRoot/buildChns/lib:/home/eicc/FairRoot/build_18.4.2/lib:/home/eicc/software/FairSoft/install/lib:/home/eicc/software/FairSoft/install/lib/Geant3-3.7.0/.."
			export PATH="/home/eicc/software/FairSoft/install/bin:/home/eicc/software/cmake/bin:/usr/local/cuda-10.1/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin"
			;;
	esac
fi
