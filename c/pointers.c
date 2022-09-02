#include <stdio.h>
int main(){
    int a = 100;
    int *p ;
    p = &a;
    printf("\nvalue of the variable is %d\n",*p);

    printf("The address of the variable \"a\" in decimal is = %d\n",p);
    printf("The address of the variable \"a\" in hexadeciaml is = %08x\n", p);
}
 