#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src orange.cpp    -o  orange

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lavanderA.cpp    -o  lavanderA
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lavanderB.cpp    -o  lavanderB
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lavanderC.cpp    -o  lavanderC

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src gray.cpp    -o  gray
