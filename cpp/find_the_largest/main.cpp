#include <cctype>
#include <iostream>
#include <string>
#include <vector>

bool isPrime(int n) {
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
int findLargestPrime(const std::vector<int> &numbers) {
  int largest = -1;

  for (int number : numbers) {
    if (isPrime(number) && number > largest) {
      largest = number;
    }
  }

  return largest;
}
std::vector<int> parseNumbers(const std::string &raw) {
  std::vector<int> values;
  int value = 0;
  int sign = 1;
  bool inNumber = false;

  for (char ch : raw) {
    if (ch == '-' && !inNumber) {
      sign = -1;
      value = 0;
      inNumber = true;
      continue;
    }

    if (std::isdigit(static_cast<unsigned char>(ch))) {
      if (!inNumber) {
        sign = 1;
        value = 0;
        inNumber = true;
      }
      value = value * 10 + (ch - '0');
      continue;
    }

    if (inNumber) {
      values.push_back(sign * value);
      sign = 1;
      value = 0;
      inNumber = false;
    }
  }

  if (inNumber) {
    values.push_back(sign * value);
  }

  return values;
}

int main() {
  std::string raw((std::istreambuf_iterator<char>(std::cin)),
                  std::istreambuf_iterator<char>());
  std::vector<int> numbers = parseNumbers(raw);
  std::cout << findLargestPrime(numbers) << "\n";
  return 0;
}
