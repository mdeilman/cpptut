#include "gtest/gtest.h"
#include "reverse_test.hpp"
/*
std::string reverse(){

  std::string in;
  std::cout << "Enter a string (which I will try to reverse):" ;
  std::getline(std::cin, in);

  for(std::size_t i = 0, i < in.length() / 2; i++){
    std::string::value_type c = in[i];
    in[i] = in[in.length() - 1 - i];
    in[in.length() - 1 - i] = c;
  }

  return in;
}

// refactor - step 1 - exclude input

std::string get_user_string(){

  std::string in;
  std::cout << "Enter a string (which I will try to reverse):" ;
  std::getline(std::cin, in);

  return in ;
}

// now we replace it

std::string reverse(){

  std::string in = get_user_string();
  for(std::size_t i = 0, i < in.length() / 2; i++){
    std::string::value_type c = in[i];
    in[i] = in[in.length() - 1 - i];
    in[in.length() - 1 - i] = c;
  }

  return in;
}

// still not quite where we want to be the function to be testable
*/



int main(int argc, char* argv[]){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
