echo off
set  left_folder=..\out\dec
set  right_folder=..\..\..\..\mirror\example\test\out\dec
set  target_folder=..\out\check
set  program_TC=..\out\tc.exe


%program_TC% %left_folder%\cmy-0.tga         %right_folder%\cmy-0.tga           %target_folder%\cmy-0.tga
%program_TC% %left_folder%\cmy-1.tga         %right_folder%\cmy-1.tga           %target_folder%\cmy-1.tga
%program_TC% %left_folder%\cmy-2.tga         %right_folder%\cmy-2.tga           %target_folder%\cmy-2.tga
%program_TC% %left_folder%\cmyk-0.tga        %right_folder%\cmyk-0.tga          %target_folder%\cmyk-0.tga
%program_TC% %left_folder%\cmyk-1.tga        %right_folder%\cmyk-1.tga          %target_folder%\cmyk-1.tga
%program_TC% %left_folder%\cmyk-2.tga        %right_folder%\cmyk-2.tga          %target_folder%\cmyk-2.tga
%program_TC% %left_folder%\cmyk-3.tga        %right_folder%\cmyk-3.tga          %target_folder%\cmyk-3.tga
%program_TC% %left_folder%\gray-0.tga        %right_folder%\gray-0.tga          %target_folder%\gray-0.tga
%program_TC% %left_folder%\hsi-0.tga         %right_folder%\hsi-0.tga           %target_folder%\hsi-0.tga
%program_TC% %left_folder%\hsi-1.tga         %right_folder%\hsi-1.tga           %target_folder%\hsi-1.tga
%program_TC% %left_folder%\hsi-2.tga         %right_folder%\hsi-2.tga           %target_folder%\hsi-2.tga
%program_TC% %left_folder%\hsl-0.tga         %right_folder%\hsl-0.tga           %target_folder%\hsl-0.tga
%program_TC% %left_folder%\hsl-1.tga         %right_folder%\hsl-1.tga           %target_folder%\hsl-1.tga
%program_TC% %left_folder%\hsl-2.tga         %right_folder%\hsl-2.tga           %target_folder%\hsl-2.tga
%program_TC% %left_folder%\hsv-0.tga         %right_folder%\hsv-0.tga           %target_folder%\hsv-0.tga
%program_TC% %left_folder%\hsv-1.tga         %right_folder%\hsv-1.tga           %target_folder%\hsv-1.tga
%program_TC% %left_folder%\hsv-2.tga         %right_folder%\hsv-2.tga           %target_folder%\hsv-2.tga
%program_TC% %left_folder%\hwb-0.tga                        %right_folder%\hwb-0.tga                                      %target_folder%\hwb-0.tga
%program_TC% %left_folder%\hwb-1.tga                        %right_folder%\hwb-1.tga                                      %target_folder%\hwb-1.tga
%program_TC% %left_folder%\hwb-2.tga                        %right_folder%\hwb-2.tga                                      %target_folder%\hwb-2.tga
%program_TC% %left_folder%\labCIE-0.tga                     %right_folder%\labCIE-0.tga                                   %target_folder%\labCIE-0.tga
%program_TC% %left_folder%\labCIE-1.tga                     %right_folder%\labCIE-1.tga                                   %target_folder%\labCIE-1.tga
%program_TC% %left_folder%\labCIE-2.tga                     %right_folder%\labCIE-2.tga                                   %target_folder%\labCIE-2.tga
%program_TC% %left_folder%\LabHC-0.tga                      %right_folder%\LabHC-0.tga                                    %target_folder%\LabHC-0.tga
%program_TC% %left_folder%\LabHC-1.tga                      %right_folder%\LabHC-1.tga                                    %target_folder%\LabHC-1.tga
%program_TC% %left_folder%\LabHC-2.tga                      %right_folder%\LabHC-2.tga                                    %target_folder%\LabHC-2.tga
%program_TC% %left_folder%\labHunter-0.tga                  %right_folder%\labHunter-0.tga                                %target_folder%\labHunter-0.tga
%program_TC% %left_folder%\labHunter-1.tga                  %right_folder%\labHunter-1.tga                                %target_folder%\labHunter-1.tga
%program_TC% %left_folder%\labHunter-2.tga                  %right_folder%\labHunter-2.tga                                %target_folder%\labHunter-2.tga

%program_TC% %left_folder%\lmsBFD-0.tga       %right_folder%\lmsBFD-0.tga          %target_folder%\lmsBFD-0.tga
%program_TC% %left_folder%\lmsBFD-1.tga       %right_folder%\lmsBFD-1.tga          %target_folder%\lmsBFD-1.tga
%program_TC% %left_folder%\lmsBFD-2.tga       %right_folder%\lmsBFD-2.tga          %target_folder%\lmsBFD-2.tga
%program_TC% %left_folder%\lmsK65-0.tga       %right_folder%\lmsK65-0.tga          %target_folder%\lmsK65-0.tga
%program_TC% %left_folder%\lmsK65-1.tga       %right_folder%\lmsK65-1.tga          %target_folder%\lmsK65-1.tga
%program_TC% %left_folder%\lmsK65-2.tga       %right_folder%\lmsK65-2.tga          %target_folder%\lmsK65-2.tga
%program_TC% %left_folder%\lmsKE-0.tga        %right_folder%\lmsKE-0.tga           %target_folder%\lmsKE-0.tga
%program_TC% %left_folder%\lmsKE-1.tga        %right_folder%\lmsKE-1.tga           %target_folder%\lmsKE-1.tga
%program_TC% %left_folder%\lmsKE-2.tga        %right_folder%\lmsKE-2.tga           %target_folder%\lmsKE-2.tga
%program_TC% %left_folder%\lmsMCAT02-0.tga    %right_folder%\lmsMCAT02-0.tga       %target_folder%\lmsMCAT02-0.tga
%program_TC% %left_folder%\lmsMCAT02-1.tga    %right_folder%\lmsMCAT02-1.tga       %target_folder%\lmsMCAT02-1.tga
%program_TC% %left_folder%\lmsMCAT02-2.tga    %right_folder%\lmsMCAT02-2.tga       %target_folder%\lmsMCAT02-2.tga
%program_TC% %left_folder%\luv-0.tga         %right_folder%\luv-0.tga           %target_folder%\luv-0.tga
%program_TC% %left_folder%\luv-1.tga         %right_folder%\luv-1.tga           %target_folder%\luv-1.tga
%program_TC% %left_folder%\luv-2.tga         %right_folder%\luv-2.tga           %target_folder%\luv-2.tga
%program_TC% %left_folder%\LuvHC-0.tga                      %right_folder%\LuvHC-0.tga                                    %target_folder%\LuvHC-0.tga
%program_TC% %left_folder%\LuvHC-1.tga                      %right_folder%\LuvHC-1.tga                                    %target_folder%\LuvHC-1.tga
%program_TC% %left_folder%\LuvHC-2.tga                      %right_folder%\LuvHC-2.tga                                    %target_folder%\LuvHC-2.tga
%program_TC% %left_folder%\rgb-0.tga         %right_folder%\rgb-0.tga           %target_folder%\rgb-0.tga
%program_TC% %left_folder%\rgb-1.tga         %right_folder%\rgb-1.tga           %target_folder%\rgb-1.tga
%program_TC% %left_folder%\rgb-2.tga         %right_folder%\rgb-2.tga           %target_folder%\rgb-2.tga
%program_TC% %left_folder%\xyy-0.tga         %right_folder%\xyy-0.tga           %target_folder%\xyy-0.tga
%program_TC% %left_folder%\xyy-1.tga         %right_folder%\xyy-1.tga           %target_folder%\xyy-1.tga
%program_TC% %left_folder%\xyy-2.tga         %right_folder%\xyy-2.tga           %target_folder%\xyy-2.tga
%program_TC% %left_folder%\xyz-0.tga         %right_folder%\xyz-0.tga           %target_folder%\xyz-0.tga
%program_TC% %left_folder%\xyz-1.tga         %right_folder%\xyz-1.tga           %target_folder%\xyz-1.tga
%program_TC% %left_folder%\xyz-2.tga         %right_folder%\xyz-2.tga           %target_folder%\xyz-2.tga
%program_TC% %left_folder%\YCgCo-0.tga       %right_folder%\YCgCo-0.tga         %target_folder%\YCgCo-0.tga
%program_TC% %left_folder%\YCgCo-1.tga       %right_folder%\YCgCo-1.tga         %target_folder%\YCgCo-1.tga
%program_TC% %left_folder%\YCgCo-2.tga       %right_folder%\YCgCo-2.tga         %target_folder%\YCgCo-2.tga
%program_TC% %left_folder%\YDbDr-0.tga       %right_folder%\YDbDr-0.tga         %target_folder%\YDbDr-0.tga
%program_TC% %left_folder%\YDbDr-1.tga       %right_folder%\YDbDr-1.tga         %target_folder%\YDbDr-1.tga
%program_TC% %left_folder%\YDbDr-2.tga       %right_folder%\YDbDr-2.tga         %target_folder%\YDbDr-2.tga
%program_TC% %left_folder%\yiq-0.tga         %right_folder%\yiq-0.tga           %target_folder%\yiq-0.tga
%program_TC% %left_folder%\yiq-1.tga         %right_folder%\yiq-1.tga           %target_folder%\yiq-1.tga
%program_TC% %left_folder%\yiq-2.tga         %right_folder%\yiq-2.tga           %target_folder%\yiq-2.tga
%program_TC% %left_folder%\YPbPr2020-0.tga   %right_folder%\YPbPr2020-0.tga     %target_folder%\YPbPr2020-0.tga
%program_TC% %left_folder%\YPbPr2020-1.tga   %right_folder%\YPbPr2020-1.tga     %target_folder%\YPbPr2020-1.tga
%program_TC% %left_folder%\YPbPr2020-2.tga   %right_folder%\YPbPr2020-2.tga     %target_folder%\YPbPr2020-2.tga
%program_TC% %left_folder%\YPbPr601-0.tga    %right_folder%\YPbPr601-0.tga      %target_folder%\YPbPr601-0.tga
%program_TC% %left_folder%\YPbPr601-1.tga    %right_folder%\YPbPr601-1.tga      %target_folder%\YPbPr601-1.tga
%program_TC% %left_folder%\YPbPr601-2.tga    %right_folder%\YPbPr601-2.tga      %target_folder%\YPbPr601-2.tga
%program_TC% %left_folder%\YPbPr709-0.tga    %right_folder%\YPbPr709-0.tga      %target_folder%\YPbPr709-0.tga
%program_TC% %left_folder%\YPbPr709-1.tga    %right_folder%\YPbPr709-1.tga      %target_folder%\YPbPr709-1.tga
%program_TC% %left_folder%\YPbPr709-2.tga    %right_folder%\YPbPr709-2.tga      %target_folder%\YPbPr709-2.tga
%program_TC% %left_folder%\yuv-601-0.tga     %right_folder%\yuv-601-0.tga       %target_folder%\yuv-601-0.tga
%program_TC% %left_folder%\yuv-601-1.tga     %right_folder%\yuv-601-1.tga       %target_folder%\yuv-601-1.tga
%program_TC% %left_folder%\yuv-601-2.tga     %right_folder%\yuv-601-2.tga       %target_folder%\yuv-601-2.tga
%program_TC% %left_folder%\yuv-709-0.tga     %right_folder%\yuv-709-0.tga       %target_folder%\yuv-709-0.tga
%program_TC% %left_folder%\yuv-709-1.tga     %right_folder%\yuv-709-1.tga       %target_folder%\yuv-709-1.tga
%program_TC% %left_folder%\yuv-709-2.tga     %right_folder%\yuv-709-2.tga       %target_folder%\yuv-709-2.tga

pause