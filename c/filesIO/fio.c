#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  FILE *fp;
  fp = fopen("test.txt", "w");
  char k = 'h';
  fprintf(fp, "%c\n", k);
  return 0;
}
