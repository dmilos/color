@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src /D%PP2F% hsi.cpp
cl /EHsc  -I../../../../src /D%PP2F% hsl.cpp
cl /EHsc  -I../../../../src /D%PP2F% hsv.cpp
cl /EHsc  -I../../../../src /D%PP2F% lab.cpp
cl /EHsc  -I../../../../src /D%PP2F% LabCH.cpp
cl /EHsc  -I../../../../src /D%PP2F% luv.cpp
cl /EHsc  -I../../../../src /D%PP2F% LuvCH.cpp
cl /EHsc  -I../../../../src /D%PP2F% rgb_hsi.cpp
cl /EHsc  -I../../../../src /D%PP2F% rgb_hsl.cpp
cl /EHsc  -I../../../../src /D%PP2F% rgb_hsv.cpp
