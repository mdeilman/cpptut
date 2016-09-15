g++ -c unit_$1.cpp -I /Users/mario/src/googletest/googletest/include -I. -I../src -o ../build/unit_$1.o
g++ -o ../build/unit_$1 ../build/unit_$1.o /Users/mario/src/googletest/build/googlemock/gtest/libgtest.a
