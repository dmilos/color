#!/bin/bash

colorTestCounter=$(($colorTestCounter+1)); echo [$colorTestCounter][$(date)]$(pwd)
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src tsl.cpp     -o  tsl
