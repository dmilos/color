echo off
set  left_folder=..\out\operation
set  right_folder=..\out-x\operation
set  target_folder=..\out\check
set  program_TC=..\out\tc.exe

%program_TC% %left_folder%\bias-bgr.tga    %right_folder%\bias-bgr.tga    %target_folder%\bias-bgr.tga
%program_TC% %left_folder%\bias-gray.tga   %right_folder%\bias-gray.tga   %target_folder%\bias-gray.tga
%program_TC% %left_folder%\gain-bgr.tga    %right_folder%\gain-bgr.tga    %target_folder%\gain-bgr.tga
%program_TC% %left_folder%\gain-gray.tga   %right_folder%\gain-gray.tga   %target_folder%\gain-gray.tga
%program_TC% %left_folder%\gamma-bgr.tga   %right_folder%\gamma-bgr.tga   %target_folder%\gamma-bgr.tga
%program_TC% %left_folder%\gamma-gray.tga  %right_folder%\gamma-gray.tga  %target_folder%\gamma-gray.tga

pause
