#!/bin/bash

pwd

cd ./compare
./make.sh
cd ..

g++ -fexceptions -std=c++11 -g -I../../../src addition.cpp        -o  addition
g++ -fexceptions -std=c++11 -g -I../../../src divide.cpp          -o  divide
g++ -fexceptions -std=c++11 -g -I../../../src scale.cpp           -o  scale
g++ -fexceptions -std=c++11 -g -I../../../src subtraction.cpp     -o  subtraction
