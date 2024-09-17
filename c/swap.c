#include <stdio.h>
void swap(int *a, int *b) {
  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *a ^ *b;
}
int main(int argc, char *argv[]) {
  int a = 1, b = 10;
  swap(&a, &b);
  printf(" a = %d , b= %d ", a, b);
}
