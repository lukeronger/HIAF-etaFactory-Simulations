#!/bin/bash

set +x

if [ -n "$1" ]; then
    echo "包含第一个参数"
else
    echo "没有包含第一参数"
	exit
fi

MAXJOBENEGY=150
let iEnergy=1
mkdir output_file/$1
cd output_file/$1
cp ../run_sim_emc.C .
rm *.txt
rm job*.c
rm *.root
mkdir /data2/ytian/wall_run/$1

while [ $iEnergy -le $MAXJOBENEGY ]
do
	energy=$(echo "$iEnergy*0.1"|bc)
	echo $energy
	JOBFILE="job_"$iEnergy".c"

	touch $JOBFILE
	echo $JOBFILE
	echo "void job_"$iEnergy"(){ ">>$JOBFILE
	echo "gROOT->ProcessLine(\".x run_sim_emc.C("$energy", "$1")\"); ">>$JOBFILE
	echo "} ">>$JOBFILE

	JOBNAME="\"run_sim.C("$energy")\""
	echo $JOBNAME
	JOBOUTPUT=$iEnergy"_file.txt"
	nohup root -l $JOBFILE > $JOBOUTPUT 2>&1 &
	sleep 2

	if [ $iEnergy -lt 10 ]; then
		iEnergy=$[$iEnergy+1]
	elif [ $iEnergy -lt 30 ]; then 
		iEnergy=$[$iEnergy+2]
	elif [ $iEnergy -lt 100 ]; then
		iEnergy=$[$iEnergy+5]
	else
        iEnergy=$[$iEnergy+10]
	fi
done

