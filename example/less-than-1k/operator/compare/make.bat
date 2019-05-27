@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src equal.cpp
cl /EHsc  -I../../../../src great.cpp
cl /EHsc  -I../../../../src great_or_equal.cpp
cl /EHsc  -I../../../../src less.cpp
cl /EHsc  -I../../../../src less_or_equal.cpp
cl /EHsc  -I../../../../src not_equal.cpp
