#include <stdint.h>
#include <stdio.h>
int main(int argc, char *argv[]) {
  uint8_t a = 10; // 10 in hex
  printf("a = %d\n", a);

  a = a | 0xFF;
  printf("1. a = %d\n", a);

  a = a ^ 0xF0;

  printf("2. a = %d\n", a);
}
