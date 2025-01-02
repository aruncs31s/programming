#include <stdint.h>
#include <stdio.h>
#define let int
int main(int argc, char *argv[]) {
  uint8_t a = 48;
  uint8_t first_nibble = a & 0xF0;
  uint8_t second_nibble = a & 0x0F;

  /* printf("\nFirst nibble F %d", (a & 0xF0)); */
  printf("\nFirst nibble %d\n", first_nibble >> 4);
  printf("Second nibble %d\n", second_nibble);
}
