#include <iostream>
#include <string>

constexpr auto greeting  = "Cpp Tutorial";
constexpr auto underline = "------------";
auto exampleGreeting = [] (std::string m) {return std::string("Example: ") + m;};

int main(int argc, char* argv[]){

  std::cout << greeting << std::endl;
  std::cout << underline << std::endl;
  std::cout << exampleGreeting("3-1ex") << std::endl;
  std::cout << "Arguments provided: " << argc << std::endl;
  std::cout << "Program name: " << argv[0] << std::endl;
  std::cout << "Arguments 1: " << argv[1] << std::endl;
  return 0; // Not really necessary as described in the standard
}
