#include <stdio.h>
#include <string.h>
/*https://github.com/aruncs31s*/
int main() {
char word[100];
scanf("%s",word);
printf("The word you have entered is %s\n",word);
printf("and the reverse is ");
int i;
int j=strlen(word) - 1;
char rev[100];
int k=0;
for(i=j;i>=0;i--){
    rev[k]=word[i];
    k +=1;
}
printf("%s\n",rev);

    return 0;

}
