@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src /D%PP2F% CIE76.cpp
cl /EHsc  -I../../../../src /D%PP2F% cie94g.cpp
cl /EHsc  -I../../../../src /D%PP2F% cie94t.cpp
cl /EHsc  -I../../../../src /D%PP2F% CIEDE2000.cpp
cl /EHsc  -I../../../../src /D%PP2F% CMC1984.cpp
cl /EHsc  -I../../../../src /D%PP2F% euclid.cpp
cl /EHsc  -I../../../../src /D%PP2F% gray.cpp
cl /EHsc  -I../../../../src /D%PP2F% delta_gray.cpp
cl /EHsc  -I../../../../src /D%PP2F% hue_euclid.cpp
