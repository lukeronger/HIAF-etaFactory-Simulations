#!/bin/bash

for i in $(find . -name "*.h" -o -name "*.hh" -o -name "*.cpp" -o -name "*.cc") ;
do
	sed -i -e 's/(\s*EVT_DEBUG\s*,/(EVTGEN_DEBUG,/g' $i
	sed -i -e 's/(\s*EVT_INFO\s*,/(EVTGEN_INFO,/g' $i
	sed -i -e 's/(\s*EVT_WARNING\s*,/(EVTGEN_WARNING,/g' $i
	sed -i -e 's/(\s*EVT_NOTICE\s*,/(EVTGEN_NOTICE,/g' $i
	sed -i -e 's/(\s*EVT_ERROR\s*,/(EVTGEN_ERROR,/g' $i
	sed -i -e 's/(\s*EVT_CRITICAL\s*,/(EVTGEN_CRITICAL,/g' $i
	sed -i -e 's/(\s*EVT_ALERT\s*,/(EVTGEN_ALERT,/g' $i
	sed -i -e 's/(\s*EVT_EMERGENCY\s*,/(EVTGEN_EMERGENCY,/g' $i
done

for i in $(find . -name EvtReport.hh) ; do
	sed -i -e 's/^\s*EVT_DEBUG\s*/  EVTGEN_DEBUG/g' $i
	sed -i -e 's/^\s*EVT_INFO\s*,/  EVTGEN_INFO,/g' $i
	sed -i -e 's/^\s*EVT_WARNING\s*,/  EVTGEN_WARNING,/g' $i
	sed -i -e 's/^\s*EVT_NOTICE\s*,/  EVTGEN_NOTICE,/g' $i
	sed -i -e 's/^\s*EVT_ERROR\s*,/  EVTGEN_ERROR,/g' $i
	sed -i -e 's/^\s*EVT_CRITICAL\s*,/  EVTGEN_CRITICAL,/g' $i
	sed -i -e 's/^\s*EVT_ALERT\s*,/  EVTGEN_ALERT,/g' $i
	sed -i -e 's/^\s*EVT_EMERGENCY\s*,/  EVTGEN_EMERGENCY,/g' $i
done
