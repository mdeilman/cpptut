
Unittest framework for windows

## UnitTest++

# Github: https://github.com/unittest-cpp/unittest-cpp


## Repo

git clone https://github.com/unittest-cpp/unittest-cpp
cd unittest-cpp
git checkout v1.6.1
mkdir build
cd ./build

## For standalone MinGW pls use

cmake -G "Unix Makefiles" ..

# Compile line foe unittest++

g++ -o %1 %1.cpp -I. -Ic:\home\src\unittest-cpp\UnitTest++ -Lc:\home\src\unittest-cpp\build -lunittest++

## Googletest

# Github: https://github.com/google/googletest


## Repo

git clone https://github.com/google/googletest
cd googletest
mkdir build
cd ./build

## For standalone MinGW pls use

cmake -G "Unix Makefiles" ..

# Compile line foe unittest++

g++ -o %1 %1.cpp -I. -Ic:\home\src\unittest-cpp\UnitTest++ -Lc:\home\src\unittest-cpp\build -lunittest++
g++ -o %1 %1.cpp -I. -Ic:\home\src\googletest\googletest\include main.cpp C:\home\src\googletest\build\googlemock\gtest\libgtest.a
g++ -o %1 %1.cpp -I C:\home\src\googletest\googletest\include -I. -I..\src main.cpp C:\home\src\googletest\build\googlemock\gtest\libgtest.a
