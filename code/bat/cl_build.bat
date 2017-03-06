@echo off

ctime -begin cl_tut.ctm

set CommonCompilerFlags=-Od -nologo -fp:fast -fp:except- -Gm- -GR- -EHa- -Zo -Oi -W4 -wd4996 -wd4204 -Z7 -EHsc
set CommonCompilerFlags=-DDEBUG=0 %CommonCompilerFlags%
set CommonLinkerFlags= -incremental:no -opt:ref

REM TODO - can we just build both with one exe?

IF NOT EXIST ..\build mkdir ..\build
pushd ..\build

del *.pdb > NUL 2> NUL

REM 64-bit build
REM Optimization switches /wO2
echo WAITING FOR PDB > lock.tmp
cl %CommonCompilerFlags% ..\code\%1.cpp -Fmwin32_tut.map /Fe..\build\%1.exe /link %CommonLinkerFlags%
set LastError=%ERRORLEVEL%
del lock.tmp
popd

ctime -end cl_tut.ctm %LastError%
