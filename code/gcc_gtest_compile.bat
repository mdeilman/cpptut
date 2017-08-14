echo Compiling with GCC Commandline Compiler
echo Compiling unit_%1.cpp
g++ -c unit_%1.cpp -I C:\home\src\github\gtest\googletest\include -IC:\home\src\lib\class-library\include -I. -I..\src -o ..\build\unit_%1.o
echo Linking unit_%1.obj
g++ -o ..\build\gcc_unit_%1 ..\build\unit_%1.o C:\home\src\lib\libgtest.a 
echo Running unit_%1
..\build\gcc_unit_%1
