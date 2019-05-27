@rem !/bin/msdos
@
@echo %cd%
@
@cd bound
@call make.bat
@cd .. 
@
@cd component
@call make.bat
@cd .. 
@
@cd container
@call make.bat
@cd .. 
@
@cd index
@call make.bat
@cd .. 
@
@cd scalar
@call make.bat
@cd .. 

