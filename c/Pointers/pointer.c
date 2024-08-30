#include <stdio.h>
int main(int argc, char *argv[]) {
  int A[2] = {1, 3};
  int *p = A;
  printf("%d\n", *p);
  printf("%d", *(p + 1));
}
