@echo off

ctime -begin cpptut.ctm

set CFILE=invoice

set GCCCompilerFlags=-std=c++11 -Wall -Wextra -g
set GCCCompilerFlags=-DDEBUG=0 %GCCCompilerFlags%
set IncludeFlags=-IC:\home\src\github\gtest\googletest\include -IC:\home\src\lib\class-library\include

IF NOT EXIST ..\build mkdir ..\build

cls
echo GNU Compiler Collection - C++ Compiler
g++ -dumpversion
g++ -dumpmachine
echo Compiling unit_%CFILE%

ctime -begin cpptut.ctm

g++ %GCCCompilerFlags% %IncludeFlags% -c unit_%CFILE%.cpp -o ..\build\unit_%CFILE%.o
g++ ..\build\unit_%CFILE%.o -o ..\build\unit_%CFILE%.exe C:\home\src\lib\libgtest.a

ctime -end cpptut.ctm %LastError%

echo Running unit_%CFILE%

..\build\unit_%CFILE%

set LastError=%ERRORLEVEL%

