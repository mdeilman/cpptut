g++ -c unit_%1.cpp -I C:\home\src\googletest\googletest\include -I. -I..\src -o ..\build\unit_%1.o
g++ -o ..\build\unit_%1 ..\build\unit_%1.o C:\home\src\googletest\build\googlemock\gtest\libgtest.a
