#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2cmy.cpp            -o xyz2cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2cmyk.cpp           -o xyz2cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2gray.cpp           -o xyz2gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2hsi.cpp            -o xyz2hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2hsl.cpp            -o xyz2hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2hsv.cpp            -o xyz2hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2hwb.cpp            -o xyz2hwb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2lab.cpp            -o xyz2lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2lab_CIE.cpp        -o xyz2lab_CIE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2lab_Hunter.cpp     -o xyz2lab_Hunter
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2LabCH.cpp          -o xyz2LabCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2lms.cpp            -o xyz2lms
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2lms_BFD.cpp        -o xyz2lms_BFD
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2lms_K65.cpp        -o xyz2lms_K65
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2lms_KE.cpp         -o xyz2lms_KE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2lms_MCAT02.cpp     -o xyz2lms_MCAT02
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2luv.cpp            -o xyz2luv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2LuvCH.cpp          -o xyz2LuvCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2rgb.cpp            -o xyz2rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2xyy.cpp            -o xyz2xyy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2xyz.cpp            -o xyz2xyz
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2YCgCo.cpp          -o xyz2YCgCo
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2YDbDr.cpp          -o xyz2YDbDr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2yiq.cpp            -o xyz2yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2YPbPr.cpp          -o xyz2YPbPr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2YPbPr2020.cpp      -o xyz2YPbPr2020
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2YPbPr601.cpp       -o xyz2YPbPr601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2YPbPr709.cpp       -o xyz2YPbPr709
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2yuv.cpp            -o xyz2yuv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2yuv601.cpp         -o xyz2yuv601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyz2yuv709.cpp         -o xyz2yuv709