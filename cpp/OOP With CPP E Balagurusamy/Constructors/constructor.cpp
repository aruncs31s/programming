#include <iostream>
class co_ordinates {
public:
  co_ordinates(void);
  int x;
  int y;
};
co_ordinates::co_ordinates(void) {
  x = 0;
  y = 0;
}
int main(int argc, char *argv[]) {
  co_ordinates x1;
  co_ordinates x2;
  std::cout << x1.x << "\n";
  std::cout << x1.y << "\n";
}
