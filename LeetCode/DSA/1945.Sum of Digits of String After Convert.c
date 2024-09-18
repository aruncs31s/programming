
int sum_of_digit(int _number) {
  int _sum = 0;
  do {
    _sum += _number % 10;
    _number /= 10;
  } while (_number > 0);

  return _sum;
}
int getLucky(char *s, int k) {
  int magic_number = 96;
  int result = 0;
  int new_array[strlen(s)];
  for (int i = 0; i < strlen(s); ++i) {
    new_array[i] = (int)s[i] - magic_number;
    result += sum_of_digit(new_array[i]);
  }
  while (k > 1) {
    result = sum_of_digit(result);
    k -= 1;
  }
  return result;
}
