#ifndef TEMP_CONVERTER_HPP_
#define TEMP_CONVERTER_HPP_

inline
double celsius_to_fahrenheit(double c){
  // Note: assert if value of Fahrenheit is out of scale 0 ... 200
  return (c * 9/5) + 32;
}

#endif // TEMP_CONVERTER_HPP_
