#ifndef TEMP_CONVERTER_HPP_
#define TEMP_CONVERTER_HPP_

#include <cmath>

// Prototypes

double celsius_to_fahrenheit(double c);
// void test_celsius_to_fahrenheit();

// Code

inline
double celsius_to_fahrenheit(double c){
  // Note: assert if value of Fahrenheit is out of scale 0 ... 200
  return (c * 9/5) + 32.0;
}

/*
const double EPSILON = 1.0f; // use a really small number instead of this

bool closeEnough( double f1, double f2)
{
    return fabs(f1-f2)<EPSILON;
    // test if the floats are so close together that they can be considered equal
}
*/

#endif // TEMP_CONVERTER_HPP_
