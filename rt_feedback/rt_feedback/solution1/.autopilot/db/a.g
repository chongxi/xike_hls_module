#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /disk0/Work/xike_hls_module/rt_feedback/rt_feedback/solution1/.autopilot/db/a.g.bc ${1+"$@"}
