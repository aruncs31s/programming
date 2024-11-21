#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
int a = 123111; // to "123111"
int length(int _num) {
  int _len = 0;
  while (_num > 0) {
    _num /= 10;
    ++_len;
  }
  return _len;
}
char *int_to_char(int _num) {
  char *_thechar = malloc(sizeof(char) * length(_num));
  uint8_t _length = length(_num);
  _thechar[_length] = '\0';
  if (!_thechar) {
    return NULL;
  }
  uint8_t _index = _length - 1;

  while (_num) { // While false (int) 0 = false
    _thechar[_index] = _num % 10;
    printf("%d\n", _thechar[_index]);
    /* printf("%d\n", _num); */
    _num /= 10;
    --_index;
  }
  return _thechar;
}
int main(int argc, char *argv[]) {
  char *new_char = int_to_char(a);
  printf("Hi %c\n", new_char[0]);
  for (int i = length(a); i >= 0; --i) {
    printf("%c\n", new_char[i]);
  }
}
