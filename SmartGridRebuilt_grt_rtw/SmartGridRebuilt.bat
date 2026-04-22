
set MATLAB=D:\InstalledSoftwere\MATLAB\R2023a

cd .

if "%1"=="" ("D:\InstalledSoftwere\MATLAB\R2023a\bin\win64\gmake"  -f SmartGridRebuilt.mk all) else ("D:\InstalledSoftwere\MATLAB\R2023a\bin\win64\gmake"  -f SmartGridRebuilt.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1