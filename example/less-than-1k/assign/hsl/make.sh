#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2cmy.cpp            -o hsl2cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2cmyk.cpp           -o hsl2cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2gray.cpp           -o hsl2gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2hsi.cpp            -o hsl2hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2hsl.cpp            -o hsl2hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2hsv.cpp            -o hsl2hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2hwb.cpp            -o hsl2hwb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2lab.cpp            -o hsl2lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2lab_CIE.cpp        -o hsl2lab_CIE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2lab_Hunter.cpp     -o hsl2lab_Hunter
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2LabCH.cpp          -o hsl2LabCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2lms.cpp            -o hsl2lms
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2lms_BFD.cpp        -o hsl2lms_BFD
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2lms_K65.cpp        -o hsl2lms_K65
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2lms_KE.cpp         -o hsl2lms_KE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2lms_MCAT02.cpp     -o hsl2lms_MCAT02
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2luv.cpp            -o hsl2luv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2LuvCH.cpp          -o hsl2LuvCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2rgb.cpp            -o hsl2rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2xyy.cpp            -o hsl2xyy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2xyz.cpp            -o hsl2xyz
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2YCgCo.cpp          -o hsl2YCgCo
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2YDbDr.cpp          -o hsl2YDbDr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2yiq.cpp            -o hsl2yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2YPbPr.cpp          -o hsl2YPbPr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2YPbPr2020.cpp      -o hsl2YPbPr2020
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2YPbPr601.cpp       -o hsl2YPbPr601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2YPbPr709.cpp       -o hsl2YPbPr709
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2yuv.cpp            -o hsl2yuv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2yuv601.cpp         -o hsl2yuv601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl2yuv709.cpp         -o hsl2yuv709