@echo off

ctime -begin gcc_tut.ctm

set Compiler=g++
set CommonCompilerFlagsCl=-W4 -EHsc -Zi
set CommonCompilerFlagsGCC=-std=c++11 -Wall -Wextra -g
set CommonCompilerFlags=-DDEBUG=1 %CommonCompilerFlagsGCC%
set CommonLinkerFlagsCL= -incremental:no -opt:ref

REM Simple preprocessor
%Compiler% %CommonCompilerFlagsGCC% %1.cpp %CommonLinkerFlagsGCC% -o..\build\%1.exe

ctime -end gcc_tut.ctm
