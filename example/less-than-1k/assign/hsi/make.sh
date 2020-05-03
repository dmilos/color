#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2cmy.cpp            -o hsi2cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2cmyk.cpp           -o hsi2cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2gray.cpp           -o hsi2gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2hsi.cpp            -o hsi2hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2hsl.cpp            -o hsi2hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2hsv.cpp            -o hsi2hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2hwb.cpp            -o hsi2hwb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2lab.cpp            -o hsi2lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2lab_CIE.cpp        -o hsi2lab_CIE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2lab_Hunter.cpp     -o hsi2lab_Hunter
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2LabCH.cpp          -o hsi2LabCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2lms.cpp            -o hsi2lms
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2lms_BFD.cpp        -o hsi2lms_BFD
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2lms_K65.cpp        -o hsi2lms_K65
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2lms_KE.cpp         -o hsi2lms_KE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2lms_MCAT02.cpp     -o hsi2lms_MCAT02
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2luv.cpp            -o hsi2luv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2LuvCH.cpp          -o hsi2LuvCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2rgb.cpp            -o hsi2rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2xyy.cpp            -o hsi2xyy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2xyz.cpp            -o hsi2xyz
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2YCgCo.cpp          -o hsi2YCgCo
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2YDbDr.cpp          -o hsi2YDbDr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2yiq.cpp            -o hsi2yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2YPbPr.cpp          -o hsi2YPbPr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2YPbPr2020.cpp      -o hsi2YPbPr2020
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2YPbPr601.cpp       -o hsi2YPbPr601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2YPbPr709.cpp       -o hsi2YPbPr709
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2yuv.cpp            -o hsi2yuv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2yuv601.cpp         -o hsi2yuv601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi2yuv709.cpp         -o hsi2yuv709