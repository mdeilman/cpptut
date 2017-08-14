#!/usr/bin/env bash

echo "Compiling $1 with gcc into ../build dir"

export Compiler=g++
export CommonCompilerFlagsGCC="-std=c++11 -Wall -Wextra -g"
export CommonCompilerFlags="-DDEBUG=1"
export CommonLinkerFlagsGCC=""

echo $Compiler $CommonCompilerFlagsGCC $1.cpp $CommonLinkerFlagsGCC -o../build/$1.out

$Compiler $CommonCompilerFlagsGCC $1.cpp $CommonLinkerFlagsGCC -o../build/$1.out

