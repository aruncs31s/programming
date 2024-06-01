#include <stdio.h>
int sum(int a, int b);
struct numbers{
  int number1,number2;
  sum(numbers);
};
int main(int argc, char *argv[])
{
  struct numbers randNumb;
  randNumb.number1 = 10;
  randNumb.number2 = 10;
  printf("%d",randNumb.sum(randNumb.number1 ,randNumb.number1 ));
}
int sum(int a, int b){
  return a+b;
}
