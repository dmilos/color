#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb.cpp           -o rgb
