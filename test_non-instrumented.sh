#!/bin/sh
##########################################################################
# Runs all the non-instrumented (those that don't run against the actual #
# hardware) test.                                                        #
##########################################################################

set -e

curWorkDir=$PWD

cd pio/pioAtomTest-1
pio test -e  megaatmega2560 -v --without-uploading --no-reset

cd "$curWorkDir"
