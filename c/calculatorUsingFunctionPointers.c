/* Fri 02 Sep 16:53 
https://github.com/aruncs31s/programming/calculatorusingFunctionPointers.c*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int global_num_1,global_num_2,result;
int add(int a , int b){
    return a+b;
}
int sub(int a , int b){
    return a-b;
}
int mul(int a , int b){
    return a*b;
}
int divide(int a, int b){
    return a/b;
}
int mod(int a , int b){
    return a%b;
}
int ultra_scan(char Schoice[],int phase,int count,char sign){
    char numbs1[50],numbs2[50];
    int numbs_1,numbs_2,i;
    switch (phase){
        case 9:
            for(; count < strlen(Schoice); i++){

                    printf("\nNumb 1 %d",atoi(Schoice));
                    if (Schoice[i] == '+'){
                        i++;
                        sign = '+'; 
                        numbs_1 = atoi(numbs1);
                        global_num_1 = numbs_1;
                        ultra_scan(Schoice,8,i,sign);

                    }
                    else if (Schoice[i] == '-'){
                        i++;
                        numbs_1 = atoi(numbs1);
                        global_num_1 = numbs_1;
                        sign = '-';  
                        ultra_scan(Schoice,8,i+1,sign);

                    }
                    else if (Schoice[i] == '*'){
                        i++;
                        numbs_1 = atoi(numbs1);
                        global_num_1 = numbs_1;
                        sign = '*';
                        ultra_scan(Schoice,8,i,sign); 
                    }
                    else if(Schoice[i] == '/'){
                        i++;
                        numbs_1 = atoi(numbs1);
                        global_num_1 = numbs_1;
                        sign = '/';
                        ultra_scan(Schoice,8,i,sign); 
                    }
                    else if(Schoice[i] == '%'){
                        i++;
                        numbs_1 = atoi(numbs1);
                        global_num_1 = numbs_1;
                        sign = '%'; 
                        ultra_scan(Schoice,8,i,sign);
                    }
                numbs1[i] =  Schoice[i];

            }

        case 8:
            if (i == strlen(Schoice)){
                break ;
            }
            i=0;
            for( ; count < strlen(Schoice); count++){
                
                numbs2[i] = Schoice[count];
                i++;
            }
            numbs_2 = atoi(numbs2);
            printf("\n Numb 2 = %d",numbs_2);
            global_num_2 = numbs_2;
                    switch(sign){
                    case '+':
                        result = add(global_num_1,global_num_2);
                    case '-':
                        result = sub(global_num_1,global_num_2);
                    case '*':
                        result = mul(global_num_1,global_num_2);
                    case '/':
                        result = divide(global_num_1,global_num_2);
                    case '%':
                        result = mod(global_num_1,global_num_2);
                    default:
                }
        default:
    }
    return result;
}
int main(){
    char values[100];
    printf("Calc: ");
  
    scanf("%s",values);
	result = ultra_scan(values,9,0,'G');
   
   // else{
   printf("\nResult = %d\n",result);
    //}
    main();
    return 0;
}
