#ifndef CELSIUS_TO_FAHRENHEIT_TEST_HPP_
#define CELSIUS_TO_FAHRENHEIT_TEST_HPP_

#include <UnitTest++.h>
#include "temp_converter.hpp"

SUITE(TemperatureConversionTests){

  TEST(test_celsius_to_fahrenheit){
    CHECK(celsius_to_fahrenheit(15) == 59.0);
  }

}

#endif // CELSIUS_TO_FAHRENHEIT_TEST_HPP_
