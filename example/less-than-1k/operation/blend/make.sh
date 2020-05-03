#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src alpha2.cpp      -o  alpha2
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src alpha3.cpp      -o  alpha3
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src noalpha2.cpp    -o  noalpha2
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src noalpha3.cpp    -o  noalpha3
