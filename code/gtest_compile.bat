g++ -c unit_%1.cpp -I C:\home\src\gtest\googletest\include -I. -I..\src -o ..\build\unit_%1.o
g++ -o ..\build\unit_%1 ..\build\unit_%1.o C:\home\src\gtest\build\googlemock\gtest\libgtest.a
..\build\unit_%1
