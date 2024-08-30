#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  char *string;
  string = (char *)malloc(sizeof(char) * 3);
  string[0] = 'h';
  string[1] = 'i';
  string[2] = '\0'; // Null-terminate the string
  printf("%s\n", string);
  return 0;
}
