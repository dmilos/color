#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lab.cpp   -o  lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb.cpp   -o  rgb
