@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src /D%PP2F% equal.cpp
cl /EHsc  -I../../../../src /D%PP2F% great.cpp
cl /EHsc  -I../../../../src /D%PP2F% great_or_equal.cpp
cl /EHsc  -I../../../../src /D%PP2F% less.cpp
cl /EHsc  -I../../../../src /D%PP2F% less_or_equal.cpp
cl /EHsc  -I../../../../src /D%PP2F% not_equal.cpp
