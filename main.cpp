#include <iostream>

int main() {
  
  int* int_pointer = nullptr;

  std::cout << "int_pointer: " << int_pointer << std::endl;

  int a = 8;

  std::cout << "a: " << a << std::endl;
  std::cout << "&a: " << &a << std::endl;

  int_pointer = &a;

  std::cout << "int_pointer: " << int_pointer << std::endl;

}