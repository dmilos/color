#!/bin/bash

colorTestCounter=$(($colorTestCounter+1)); echo [$colorTestCounter][$(date)]$(pwd)

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lab.cpp   -o  lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb.cpp   -o  rgb
