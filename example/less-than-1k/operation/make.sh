#!/bin/bash

pwd

cd ./addition
./make.sh
cd ..

cd ./invert
./make.sh
cd ..

cd ./blend
./make.sh
cd ..

cd ./distance
./make.sh
cd ..


g++ $gccBaseSwitch $gccExtraSwitch -I../../../src median1.cpp           -o median1
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src median2.cpp           -o median2
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src mix_alpha.cpp         -o mix_alpha
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src mix_noalpha.cpp       -o mix_noalpha
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src bias.cpp              -o bias
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src delta.cpp             -o delta
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src gain.cpp              -o gain
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src gamma.cpp             -o gamma
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src scale.cpp             -o scale
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src subtract.cpp          -o subtract
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src divide.cpp            -o divide
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src multiply.cpp          -o multiply
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src ceil.cpp              -o ceil
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src clip.cpp              -o clip
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src floor.cpp             -o floor
