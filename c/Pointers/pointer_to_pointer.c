#include <stdio.h>
int main(int argc, char *argv[]) {
  int x = 10;
  int *ptr, **pptr;
  ptr = &x;
  pptr = &ptr;
  printf("The value of x is %d\n", **pptr);
}
