#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hue_helix.cpp           -o hue_helix
