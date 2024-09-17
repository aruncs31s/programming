#include <math.h>
#include <stdio.h>
int main(int argc, char *argv[]) {
  float x;
  float a, b, c;
  printf("Enter the value of a,b,c\n");
  scanf("%f %f %f", &a, &b, &c);
  float result_1, result_2;
  result_1 = ((-b) + sqrtf((b * b - 4 * a * c))) / 2 * a;
  result_2 = ((-b) - sqrt((b * b - 4 * a * c))) / 2 * a;
  printf("Roots = %f %f\n", result_1, result_2);
  return 0;
}
