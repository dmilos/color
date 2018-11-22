#!/bin/bash

pwd

g++ -fexceptions -std=c++11 -g -I../../../../src hsi2cmy.cpp            -o hsi2cmy
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2cmyk.cpp           -o hsi2cmyk
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2gray.cpp           -o hsi2gray
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2hsi.cpp            -o hsi2hsi
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2hsl.cpp            -o hsi2hsl
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2hsv.cpp            -o hsi2hsv
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2hwb.cpp            -o hsi2hwb
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2lab.cpp            -o hsi2lab
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2lab_CIE.cpp        -o hsi2lab_CIE
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2lab_Hunter.cpp     -o hsi2lab_Hunter
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2LabCH.cpp          -o hsi2LabCH
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2lms.cpp            -o hsi2lms
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2lms_BFD.cpp        -o hsi2lms_BFD
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2lms_K65.cpp        -o hsi2lms_K65
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2lms_KE.cpp         -o hsi2lms_KE
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2lms_MCAT02.cpp     -o hsi2lms_MCAT02
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2luv.cpp            -o hsi2luv
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2LuvCH.cpp          -o hsi2LuvCH
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2rgb.cpp            -o hsi2rgb
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2xyy.cpp            -o hsi2xyy
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2xyz.cpp            -o hsi2xyz
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2YCgCo.cpp          -o hsi2YCgCo
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2YDbDr.cpp          -o hsi2YDbDr
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2yiq.cpp            -o hsi2yiq
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2YPbPr.cpp          -o hsi2YPbPr
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2YPbPr2020.cpp      -o hsi2YPbPr2020
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2YPbPr601.cpp       -o hsi2YPbPr601
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2YPbPr709.cpp       -o hsi2YPbPr709
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2yuv.cpp            -o hsi2yuv
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2yuv601.cpp         -o hsi2yuv601
g++ -fexceptions -std=c++11 -g -I../../../../src hsi2yuv709.cpp         -o hsi2yuv709