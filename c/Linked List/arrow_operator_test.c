#include <stdio.h>
#include <stdlib.h>
struct somethin {
  int value;
  char *name;
};
int main(int argc, char *argv[]) {
  struct somethin *new_struct = malloc(sizeof(struct somethin));
  new_struct->value = 10;

  printf("value = %d", (*new_struct).value);
  return 0;
}
