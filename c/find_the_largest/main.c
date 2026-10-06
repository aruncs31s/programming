#include <ctype.h>
#include <stdio.h>
#include <string.h>

#include <stdbool.h>

bool is_prime(int n) {
  if (n < 2) {
    return false;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int find_largest_prime(int numbers[], int size) {
  int largest;
  for (int i = 0; i < size; ++i) {
    if (numbers[i] > largest && is_prime(numbers[i])) {
      largest = numbers[i];
    }
  }
  return largest;
}

int parse_numbers(const char *raw, int output[], int maxSize) {
  int count = 0;
  int value = 0;
  int sign = 1;
  int inNumber = 0;

  for (int i = 0; raw[i] != '\0'; i++) {
    char ch = raw[i];
    if (ch == '-' && !inNumber) {
      sign = -1;
      value = 0;
      inNumber = 1;
      continue;
    }

    if (isdigit((unsigned char)ch)) {
      if (!inNumber) {
        sign = 1;
        value = 0;
        inNumber = 1;
      }
      value = value * 10 + (ch - '0');
      continue;
    }

    if (inNumber) {
      if (count < maxSize) {
        output[count++] = sign * value;
      }
      sign = 1;
      value = 0;
      inNumber = 0;
    }
  }

  if (inNumber && count < maxSize) {
    output[count++] = sign * value;
  }

  return count;
}

int main() {
  char raw[4096];
  if (!fgets(raw, sizeof(raw), stdin)) {
    raw[0] = '\0';
  }

  int numbers[512];
  int size = parse_numbers(raw, numbers, 512);
  printf("%d\n", find_largest_prime(numbers, size));
  return 0;
}
