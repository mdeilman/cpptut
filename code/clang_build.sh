#!/usr/bin/env bash

echo "Compiling $1 with clang into build dir"
clang++ -std=c++11 -Weverything -Wno-c++98-compat -Wno-global-constructors -g -O0 $1.cpp -o ../build/$1.out
