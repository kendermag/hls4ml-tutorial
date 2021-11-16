#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/nexuscore/EGYETEM/DIPLOMAMUNKA/DATA_ACQUISITION/TUDATALLAPOT_QUANTIZED_VER0_312_FULL/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
