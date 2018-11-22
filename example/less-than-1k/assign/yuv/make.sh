#!/bin/bash

pwd

g++ -fexceptions -std=c++11 -g -I../../../../src yuv2cmy.cpp            -o yuv2cmy
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2cmyk.cpp           -o yuv2cmyk
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2gray.cpp           -o yuv2gray
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2hsi.cpp            -o yuv2hsi
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2hsl.cpp            -o yuv2hsl
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2hsv.cpp            -o yuv2hsv
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2hwb.cpp            -o yuv2hwb
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2lab.cpp            -o yuv2lab
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2lab_CIE.cpp        -o yuv2lab_CIE
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2lab_Hunter.cpp     -o yuv2lab_Hunter
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2LabCH.cpp          -o yuv2LabCH
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2lms.cpp            -o yuv2lms
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2lms_BFD.cpp        -o yuv2lms_BFD
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2lms_K65.cpp        -o yuv2lms_K65
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2lms_KE.cpp         -o yuv2lms_KE
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2lms_MCAT02.cpp     -o yuv2lms_MCAT02
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2luv.cpp            -o yuv2luv
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2LuvCH.cpp          -o yuv2LuvCH
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2rgb.cpp            -o yuv2rgb
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2xyy.cpp            -o yuv2xyy
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2xyz.cpp            -o yuv2xyz
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2YCgCo.cpp          -o yuv2YCgCo
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2YDbDr.cpp          -o yuv2YDbDr
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2yiq.cpp            -o yuv2yiq
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2YPbPr.cpp          -o yuv2YPbPr
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2YPbPr2020.cpp      -o yuv2YPbPr2020
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2YPbPr601.cpp       -o yuv2YPbPr601
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2YPbPr709.cpp       -o yuv2YPbPr709
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2yuv.cpp            -o yuv2yuv
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2yuv601.cpp         -o yuv2yuv601
g++ -fexceptions -std=c++11 -g -I../../../../src yuv2yuv709.cpp         -o yuv2yuv709