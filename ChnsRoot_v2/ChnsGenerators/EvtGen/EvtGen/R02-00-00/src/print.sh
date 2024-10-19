#!/bin/bash
filename=`ls EvtGenModels`
for i in $filename 
do
	echo '$'{EVTGEN_MODELS_DIR}/$i
done

filename2=`ls EvtGenBase`
for j in $filename2
do
        echo '$'{EVTGEN_BASE_DIR}/$j
done

