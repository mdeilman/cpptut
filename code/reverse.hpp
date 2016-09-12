#ifndef REVERSE_HPP_
#define REVERSE_HPP_

#include <iostream>
#include <string>

std::string reverse(std::string in){

  for(std::size_t i = 0; i < in.length() / 2; i++){
    std::string::value_type c = in[i];
    in[i] = in[in.length() - 1 - i];
    in[in.length() - 1 - i] = c;
  }

  return in;
}

#endif // REVERSE_HPP_
