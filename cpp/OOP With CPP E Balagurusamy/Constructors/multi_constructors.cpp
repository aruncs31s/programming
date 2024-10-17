#include <iostream>
class co_ordinates {
public:
  co_ordinates();
  co_ordinates(int a, int b);

  int x;
  int y;
};
co_ordinates::co_ordinates(void) {
  x = 0;
  y = 0;
}
co_ordinates::co_ordinates(int a, int b) {
  x = a;
  y = b;
}
int main(int argc, char *argv[]) {
  co_ordinates x1(1, 2);
  co_ordinates x2;
  std::cout << x1.x << "\n";
  std::cout << x1.y << "\n";
  std::cout << x2.x << "\n";
  std::cout << x2.y << "\n";
}
