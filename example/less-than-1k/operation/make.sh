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


g++ -fexceptions -std=c++11 -g -I../../../src median1.cpp           -o median1
g++ -fexceptions -std=c++11 -g -I../../../src median2.cpp           -o median2
g++ -fexceptions -std=c++11 -g -I../../../src mix_alpha.cpp         -o mix_alpha
g++ -fexceptions -std=c++11 -g -I../../../src mix_noalpha.cpp       -o mix_noalpha
g++ -fexceptions -std=c++11 -g -I../../../src bias.cpp              -o bias
g++ -fexceptions -std=c++11 -g -I../../../src delta.cpp             -o delta
g++ -fexceptions -std=c++11 -g -I../../../src gain.cpp              -o gain
g++ -fexceptions -std=c++11 -g -I../../../src gamma.cpp             -o gamma
g++ -fexceptions -std=c++11 -g -I../../../src scale.cpp             -o scale
g++ -fexceptions -std=c++11 -g -I../../../src subtract.cpp          -o subtract
g++ -fexceptions -std=c++11 -g -I../../../src divide.cpp            -o divide
g++ -fexceptions -std=c++11 -g -I../../../src multiply.cpp          -o multiply
g++ -fexceptions -std=c++11 -g -I../../../src ceil.cpp              -o ceil
g++ -fexceptions -std=c++11 -g -I../../../src clip.cpp              -o clip
g++ -fexceptions -std=c++11 -g -I../../../src floor.cpp             -o floor
