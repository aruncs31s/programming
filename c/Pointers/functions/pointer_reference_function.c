#include <stdio.h>
void calculate_sum(int a, int b, int *sum) { *sum = a + b; }
int main(int argc, char *argv[]) {
  int a = 10, b = 20, sum = 0;
  calculate_sum(a, b, &sum);
  printf("sum = %d\n", sum);
  return 0;
}
