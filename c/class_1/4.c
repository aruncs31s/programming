int main() {
  int a;
  int b;
  int c;

  printf("Enter a Number\n");
  scanf("%d", &a);
  printf("Enter the next Number\n");
  scanf("%d", &b);
  printf("Select An Operator\n1.+\n2.-\n3.*\n4./");
  scanf("%d", &c);
  if (c == 1)
    printf("%d", a + b);
  else if (c == 2)

    printf("%d", a - b);
  else if (c == 3)

    printf("%d", a * b);
  else if (c == 4)

    printf("%d", a / b);
  else
    printf("Invalid Number\n");
}
