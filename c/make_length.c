#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
uint8_t find_its_length(int _num) {
  uint8_t _len = 0;
  while (_num > 0) {
    _num /= 10;
    ++_len;
  }
  return _len;
}
void make_it_lengthy(float *_num) {
  uint8_t _len = find_its_length(*_num);
  switch (_len) {
  case 1:
    *_num += .111;
    break;
  case 2:
    *_num += .11;
    break;
  case 3:
    *_num += .1;
    break;
  }
}

char *int_to_char(int _num) {
  uint8_t _len = find_its_length(_num);
  char *new_char = (char *)malloc(sizeof(char) * (_len + 1));
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
  float a = 122;

  /* printf("%d\n", find_its_length(a)); */
  make_it_lengthy(&a);
  char *_char = int_to_char(a);
  printf("%s = \n", _char);
  /* printf("%d\n", find_its_length(a)); */
  printf("%f\n", a);
}
