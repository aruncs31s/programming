#include <stdio.h>
int main(int argc, char *argv[]) {
  int x = 10;
  printf("%ld", &(&x));
}
