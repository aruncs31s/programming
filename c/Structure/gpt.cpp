#include <iostream>

struct Example {
  int variable;
  const int constant;

  Example(int var, int con) : variable(var), constant(con) {}
};

int main() {
  Example obj1(10, 20);
  Example obj2(30, 40);

  std::cout << "Obj1: variable = " << obj1.variable
            << ", constant = " << obj1.constant << std::endl;
  std::cout << "Obj2: variable = " << obj2.variable
            << ", constant = " << obj2.constant << std::endl;

  return 0;
}

class Classneme
