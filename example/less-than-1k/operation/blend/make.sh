#!/bin/bash

pwd

g++ -fexceptions -std=c++11 -g -I../../../../src alpha2.cpp      -o  alpha2
g++ -fexceptions -std=c++11 -g -I../../../../src alpha3.cpp      -o  alpha3
g++ -fexceptions -std=c++11 -g -I../../../../src noalpha2.cpp    -o  noalpha2
g++ -fexceptions -std=c++11 -g -I../../../../src noalpha3.cpp    -o  noalpha3
