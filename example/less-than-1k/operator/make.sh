#!/bin/bash

pwd

cd ./compare
./make.sh
cd ..

g++ $gccBaseSwitch $gccExtraSwitch -I../../../src addition.cpp        -o  addition
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src divide.cpp          -o  divide
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src scale.cpp           -o  scale
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src subtraction.cpp     -o  subtraction
