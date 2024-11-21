/*
 * Arun CS
 * https://github.com/aruncs31s
 * Date : 2024-10-19
 * Time : time
 */

#include <bits/types/struct_itimerspec.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int a = 783343;
uint8_t find_its_length(int _num) {
  uint8_t _len = 0;
  while (_num > 0) {
    _num /= 10;
    ++_len;
  }
  return _len;
}
char *int_to_char(int _num) {
  uint8_t _len = find_its_length(a);
  char *new_char = malloc(sizeof(char) * (_len + 1));
  if (new_char == NULL) {
    return NULL;
  }
  new_char[_len] = '\0';
  uint8_t _index = _len - 1;

  while (_num) { // the num will eventually reach 0
    /* new_char + (_len - 1) = _num % 10; */
    new_char[_index] = (_num % 10) + '0';

    --_index;
    _num /= 10;
  }
  return new_char;
}
int main() {
  char *new_char = int_to_char(a);
  if (new_char != NULL) {
    printf("%s\n", new_char);
    free(new_char); // Free allocated memory
  }
  return 0;
}
