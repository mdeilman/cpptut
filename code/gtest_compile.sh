g++ -c unit_$1.cpp -I /Users/mario/src/gtest/googletest/include -I. -I../src -o ../build/unit_$1.o
g++ -o ../build/unit_$1 ../build/unit_$1.o /Users/mario/src/gtest/build/googlemock/gtest/libgtest.a
