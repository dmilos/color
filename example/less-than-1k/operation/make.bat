@rem !/bin/msdos
@
@echo %cd%
@
@cd addition
@call make.bat
@cd ..
@
@cd invert
@call make.bat
@cd ..
@
@cd blend
@call make.bat
@cd ..
@
@cd distance
@call make.bat
@cd ..
@
@
@cl /EHsc  -I../../../src convex1.cpp
@cl /EHsc  -I../../../src convex2.cpp
@cl /EHsc  -I../../../src mix_alpha.cpp
@cl /EHsc  -I../../../src mix_noalpha.cpp
@cl /EHsc  -I../../../src bias.cpp
@cl /EHsc  -I../../../src delta.cpp
@cl /EHsc  -I../../../src gain.cpp
@cl /EHsc  -I../../../src gamma.cpp
@cl /EHsc  -I../../../src scale.cpp
@cl /EHsc  -I../../../src subtract.cpp
@cl /EHsc  -I../../../src divide.cpp
@cl /EHsc  -I../../../src multiply.cpp
@cl /EHsc  -I../../../src ceil.cpp
@cl /EHsc  -I../../../src clip.cpp
@cl /EHsc  -I../../../src floor.cpp
