// Task : Calculate the value of x if x = 2x^2+ 2x + 4 ; ^ indicates the power
// operator or power Hints : use printf to print the result use sqrt() function
// in math to calculate the square root of a function

#include <math.h>
#include <stdio.h>
//
int main() {
  // your code goes here
  int a = 2;
  int b = 2;
  int c = 4;
  double d = b ^ 2 - (4 * a * c);
  double root_prev = sqrt(d);

  return 0;
}
//
//
