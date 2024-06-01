#include <iostream>
struct Example {
  int var1;
};

int main() {
  Example ex;
  ex.var1 = 10;
  std::cout << ex.var1;
}
