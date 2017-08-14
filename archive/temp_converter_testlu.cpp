#include <libunittest/all.hpp>

#include "temp_converter.hpp"

using namespace unittest::assertions;

TEST(test_celsius_to_fahrenheit){
  assert_true(celsius_to_fahrenheit(15) == static_cast<double>(59.0), SPOT );
}
