#!/bin/bash

pwd

g++ -fexceptions -std=c++11 -g -I../../../../src orange.cpp    -o  orange

g++ -fexceptions -std=c++11 -g -I../../../../src lavanderA.cpp    -o  lavanderA
g++ -fexceptions -std=c++11 -g -I../../../../src lavanderB.cpp    -o  lavanderB
g++ -fexceptions -std=c++11 -g -I../../../../src lavanderC.cpp    -o  lavanderC

g++ -fexceptions -std=c++11 -g -I../../../../src gray.cpp    -o  gray
