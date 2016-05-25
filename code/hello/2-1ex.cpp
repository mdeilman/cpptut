#include <iostream>
#include <string>


constexpr auto greeting = "This is an auto greeting";
auto anotherGreeting = [] (std::string m) {return std::string("Hello ") + m;};

int main(){

  std::cout << greeting << std::endl;
  std::cout << anotherGreeting("Mario") << std::endl;

  return 0;
}
