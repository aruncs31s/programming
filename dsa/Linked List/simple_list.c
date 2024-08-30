#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  struct something {
    int a;
    int b;
    struct something *self;
  };
}
