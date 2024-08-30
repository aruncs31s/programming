#include <stdio.h>
int main(int argc, char *argv[])
{
  int *x; 
  int k = 10 ;
  x = &k;
  printf("%d\n",x);
  printf("%d\n",*x);
}
