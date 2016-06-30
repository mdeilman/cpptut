#include <iostream>
// uncomment to disable assert()
// #define NDEBUG
#include <cassert>

#include "temp_converter.hpp"

//typedef celsius_to_fahrenheit c2f;

void test_celsius_to_fahrenheit(){

  assert( celsius_to_fahrenheit(15) == static_cast<double>(59.0) );
  std::cout << "Execution continues past the first test" << std::endl;
  assert( celsius_to_fahrenheit(19) == static_cast<double>(66.2) );
  std::cout << "Execution continues past the second test" << std::endl;
  assert( celsius_to_fahrenheit(23) == static_cast<double>(73.4) );
  std::cout << "Execution continues past the third test" << std::endl;
  std::cout << "All tests passed" << std::endl;
}

int main(){

  test_celsius_to_fahrenheit();

  return 0;
}
