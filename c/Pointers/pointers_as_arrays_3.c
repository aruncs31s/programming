#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *string;
  string = (char *)malloc(sizeof(char) * 4);
  string[0] = 'h';
  string[1] = 'i';
  string[2] = 'i';
  string[3] = '\0';
  printf("%s\n", string);
  free(string);
}
