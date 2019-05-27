@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src CIE76.cpp
cl /EHsc  -I../../../../src cie94g.cpp
cl /EHsc  -I../../../../src cie94t.cpp
cl /EHsc  -I../../../../src CIEDE2000.cpp
cl /EHsc  -I../../../../src CMC1984.cpp
cl /EHsc  -I../../../../src euclid.cpp
cl /EHsc  -I../../../../src gray.cpp
