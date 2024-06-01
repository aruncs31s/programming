#include <iostream>
// using namespace std;
class Project {
public:
  Project() {}
  struct pins {

    struct LDR {
      int pin1, pin2, pin3, pin4;
    } LDR;
    struct Servo {
      int pin1, pin2, pin3, pin4, pin5;
    } Servo;
    // LDR LDR;
    // Servo Servo;
  } pins;
};

int main() {
  Project X;

  X.pins.LDR = {1, 2, 3, 4};
  std::cout << sizeof(X);
}
