#include <stdio,.h>
int main(){
    int n,i;
    int sum = 0 ;
    printf("\nEnter a number \t :");
    scanf("%d",&n);
    if (n > 1){
        for(i=0 ; i < n ; ++i){
            sum = i + ++i;

        }
        else
        if(n < 2){
            printf("\t %d",n);
        }

    }
}