#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/jason/Documents/misc/HLS_AES_Zip/HLS_Decrypt/solution1/.autopilot/db/a.g.bc ${1+"$@"}