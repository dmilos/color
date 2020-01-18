@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src /D%PP2F% cmy.cpp
cl /EHsc  -I../../../../src /D%PP2F% cmyk.cpp
cl /EHsc  -I../../../../src /D%PP2F% gray.cpp
cl /EHsc  -I../../../../src /D%PP2F% hsi.cpp
cl /EHsc  -I../../../../src /D%PP2F% hsl.cpp
cl /EHsc  -I../../../../src /D%PP2F% hsv.cpp
cl /EHsc  -I../../../../src /D%PP2F% hwb.cpp
cl /EHsc  -I../../../../src /D%PP2F% lab.cpp
cl /EHsc  -I../../../../src /D%PP2F% lab_CIE.cpp
cl /EHsc  -I../../../../src /D%PP2F% lab_Hunter.cpp
cl /EHsc  -I../../../../src /D%PP2F% LabCH.cpp
cl /EHsc  -I../../../../src /D%PP2F% lms.cpp
cl /EHsc  -I../../../../src /D%PP2F% luv.cpp
cl /EHsc  -I../../../../src /D%PP2F% LuvCH.cpp
cl /EHsc  -I../../../../src /D%PP2F% rgb.cpp
cl /EHsc  -I../../../../src /D%PP2F% xyy.cpp
cl /EHsc  -I../../../../src /D%PP2F% xyz.cpp
cl /EHsc  -I../../../../src /D%PP2F% YCgCo.cpp
cl /EHsc  -I../../../../src /D%PP2F% YDbDr.cpp
cl /EHsc  -I../../../../src /D%PP2F% yiq.cpp
cl /EHsc  -I../../../../src /D%PP2F% YPbPr.cpp
cl /EHsc  -I../../../../src /D%PP2F% YPbPr2020.cpp
cl /EHsc  -I../../../../src /D%PP2F% YPbPr601.cpp
cl /EHsc  -I../../../../src /D%PP2F% YPbPr709.cpp
cl /EHsc  -I../../../../src /D%PP2F% yuv.cpp
cl /EHsc  -I../../../../src /D%PP2F% yuv601.cpp
cl /EHsc  -I../../../../src /D%PP2F% yuv709.cpp
