#include <iostream>


int main(int argc, char* argv[]){

  std::cout << "Total number of args: " << argc << std::endl;

  if (argc < 4){
    std::cerr << "Invalid number or arguments. At least 4 required" << std::endl;
    return 1;
    // Exit codes
    // in unix like terminals: echo $?
    // in windows terminal: echo Exit Code is %errorlevel%
  }

  for(int i=0; i < argc; i++){
    std::cout << "arg[" << i << "]: " << argv[i] << std:: endl;
  }

  return 0;
}
