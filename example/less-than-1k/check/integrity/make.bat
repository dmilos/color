@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src /D%PP2F% cmyk.cpp
cl /EHsc  -I../../../../src /D%PP2F% hsl.cpp
cl /EHsc  -I../../../../src /D%PP2F% hsv.cpp
cl /EHsc  -I../../../../src /D%PP2F% hwb.cpp
cl /EHsc  -I../../../../src /D%PP2F% LabCH.cpp
cl /EHsc  -I../../../../src /D%PP2F% LuvCH.cpp
