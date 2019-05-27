@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src hsi.cpp
cl /EHsc  -I../../../../src hsl.cpp
cl /EHsc  -I../../../../src hsv.cpp
cl /EHsc  -I../../../../src lab.cpp
cl /EHsc  -I../../../../src LabCH.cpp
cl /EHsc  -I../../../../src luv.cpp
cl /EHsc  -I../../../../src LuvCH.cpp
cl /EHsc  -I../../../../src rgb_hsi.cpp
cl /EHsc  -I../../../../src rgb_hsl.cpp
cl /EHsc  -I../../../../src rgb_hsv.cpp
