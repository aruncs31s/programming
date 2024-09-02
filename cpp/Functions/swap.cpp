// Example of pass by reference
#include <iostream>
void swap(int &a, int &b) { // a and b are reference variable
  int t;
  t = a; // value of a will get copied to t
  a = b; // value of b get copied to a
  b = t; // value of t which is the initial value of a get copied to a
}
void swap_2(int *a, int *b) {
  int t = *a; // value at a will get copied to t
  *a = *b;    // value at memory address pointed by a copied to memory address
              // pointed by a
  *b = t;
}
int main() {
  int a = 10, b = 12;

  swap(a, b);

  std::cout << a;
  std::cout << " ";
  std::cout << b;
  swap_2(&a, &b);
  std::cout << a;
  std::cout << " ";
  std::cout << b;
}
