#include <iostream>
#include <string>

#define DEBUG 1

int main(int argc, char *argv[]){

  if(argc != 4){
    std::cerr << argv[0] << " - Error: Number of parameters not supported"
        << "\nNeed 3 parameters ... got: "<< argc << std::endl;
#ifdef DEBUG
    for (int i=1 ; i < argc ; i++){
      std::cerr << "argv[" << i << "] - " << argv[i] << std::endl;
    }
#endif
    return 1;
  }

  double lhs = std::stod(argv[1]);
  std::string op = argv[2];
  double rhs = std::stod(argv[3]);

  if (op == "+"){
    std::cout << "Result: " << lhs + rhs << std::endl;
  }
  else if (op == "-"){
    std::cout << "Result: " << lhs - rhs << std::endl;
  }
  else if (op == "x"){
    std::cout << "Result: " << lhs * rhs << std::endl;
  }
  else if (op == "/"){
    std::cout << "Result: " << lhs / rhs << std::endl;
  }
  else {
    std::cerr << argv[0] << " - Error: Operator not supported"
        << "\nSupported operators are: +,-,x,/ ... got: "<< op << std::endl;
    return 1;
  }

  return 0;
}
