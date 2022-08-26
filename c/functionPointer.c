#include <stdio.h>
int sum(int a,int b){
    return a+b;
}
void main(){
    int res=0; 
    int a = 1;
    int b = 3;
    
    int (*ptr)(int,int)= &sum;
    res = (*ptr)(2,5);
    printf("%d\n",res);
}
