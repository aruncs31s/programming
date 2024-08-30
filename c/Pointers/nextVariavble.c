#include <stdio.h>
int main(void) {

  const int a = 10, b = 12;

  int *p;
  p = &a;
  printf("%d", *(p + 1));
}
