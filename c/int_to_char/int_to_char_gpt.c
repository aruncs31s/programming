
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int a = 783343;

uint8_t find_its_length(int _num) {
  uint8_t _len = 0;
  if (_num == 0)
    return 1; // Handle the case for 0
  while (_num > 0) {
    _num /= 10;
    ++_len;
  }
  return _len;
}

char *int_to_char(int _num) {
  uint8_t _len = find_its_length(_num);
  char *new_char =
      malloc(sizeof(char) * (_len + 1)); // Allocate space for null terminator
  if (new_char == NULL) {
    return NULL; // Check for successful allocation
  }

  new_char[_len] = '\0';     // Set the null terminator
  uint8_t _index = _len - 1; // Start filling from the end

  while (_num > 0) {                      // the num will eventually reach 0
    new_char[_index] = (_num % 10) + '0'; // Convert digit to character
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
