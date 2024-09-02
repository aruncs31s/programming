#include <iostream>

class someClass {
public:
  void newPrint();
  int temp;
};
someClass.temp;
void someClass::newPrint() { cout << temp; }
