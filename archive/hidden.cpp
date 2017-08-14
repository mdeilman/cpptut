#include <iostream>


int main(){

  int abc = 1;
  int ab\u200Bc = 2 ;
  int a\u200Bbc = 3 ;

  std::cout << "abc: " << abc << std::endl ;
  std::cout << "ab\u200Bc: " << ab\u200Bc << std::endl ;
  std::cout << "a\u200Bbc: " << a\u200Bbc << std::endl ;

  return 0;

}
