#!/usr/bin/env bash

echo "Compiling $1 with clang into build dir"

#clang++ -std=c++11 -Weverything -Wno-c++98-compat -Wno-global-constructors -Wno-float-equal -g -O0 $1.cpp -o ../build/$1.out

clang++ -std=c++11 -Weverything -Wno-c++98-compat -Wno-global-constructors -Wno-float-equal -g -O0 -pthread -I. -I/usr/local/libunittest-8.1.0/include -lunittest  -L/usr/local/libunittest-8.1.0/lib $1.cpp -o ../build/$1.out
