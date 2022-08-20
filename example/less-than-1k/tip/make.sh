#!/bin/bash

colorTestCounter=$(($colorTestCounter+1)); echo [$colorTestCounter][$(date)]$(pwd)

g++ $gccBaseSwitch $gccExtraSwitch -I../../../src inplace_conversion.cpp  -o  inplace_conversion
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src memset.cpp              -o  memset
