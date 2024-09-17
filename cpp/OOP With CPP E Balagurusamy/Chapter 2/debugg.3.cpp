#include <iostream>
using namespace std;

void main() {
  int i = 10, j = 5;
  int modResult = 0;
  int divResult = 0;
  modResult = i % j;
  cout << modResult << " ";
  divResult = i / modResult;
  cout << divResult;
}
