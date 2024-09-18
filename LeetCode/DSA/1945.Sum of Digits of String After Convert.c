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
  int sum = 0;
  int str_len = strlen(s);
  int new_array[strlen(s)];
  for (int i = 0; i < str_len; ++i) {
    new_array[i] = ((int)s[i]) - magic_number;
  }
  int array_sum = 0;
  for (int i = 0; i < str_len; ++i) {
    array_sum += new_array[i] * (pow(10, str_len - (i + 1)));
  }
  sum = array_sum;
  while (k > 0) {
    sum = sum_of_digit(sum);
    k -= 1;
  }

  return sum;
}
