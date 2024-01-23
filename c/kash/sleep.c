#include <stdio.h>
#include <unistd.h>

int main() {
  printf("Before sleep\n");
  sleep(1); // Sleep for 1 second
  printf("After sleep\n");

  return 0;
}
