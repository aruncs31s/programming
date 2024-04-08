# C Programming Basics

### Hello World
```c
#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}
```
<details><summary>Run </summary>
Hello World!
</details>



### Comments
##### Single Line comment

```c
#include <stdio.h>
int main() {
  printf("Hello World!");
// This is a comment
// printf("This is a comment")
  return 0;
}

```
<details><summary>Run </summary>
Hello World!
</details>


*You can see that the `This is a comment` and `printf("This is is a comment");` is getting ignored

##### Multiline Comment
```c
#include <stdio.h>
int main() {
  printf("Hello World!");
/* This is a multi line
 printf("This is a comment") */
  return 0;
}

```
*In the previous example we have used `//` two times but we can just use `/*` and `*/` denoting starting and ending og the comment and you can put anything in between that `/* anything here is ignored by the compiler */`


### Variables
Variables are used to store a value . For example if you want to store 10 to somewhere in the program you can use a `variable`. Checkout the below example for more info

##### Syntax
```bash
type variableName = value;
```
- Example
```c
int a = 10;
```
- where `a` is the variable name
- where `10` is the value of the variable or the value that is assigned to that variable just like in math `let x =10 `
- `int` is the data type

| Variables Type | Definition    |
| -------------- | ------------- |
| int            | Whole Numbers |
| float          | Store Floating point numbers|
|char| store characters|


> [!NOTE] 
> **int**
> Int is like our whole number which is a natural numbers plus negetive numbers
> ie 
$$
int \in (Natural \ Numbers + -(Natural\  Nubers))
$$
> - Example
> ```c
> int a = 10;



> [!NOTE] 
> **float**
> It is for storing floating point numbers eg : `10.10` `3.14159`
> - Example
>```c
>float x = 12.222


> [!NOTE] 
> **char**
> It stores single characters , characters are letters or symbols like in each english word 
> "Hi" contains 2 character 
> ''Hello'  Contains 5 characters
> Example to store Hello
> ```c
> char a= 'H',
> 	b='e',
> 	c='l',
> 	d='l',
> 	e='o'; 
i```

> [!TIP]
> Dificult isn't it ? 
> You can also store it like this 
>```c
>char x[] = {'H', 'E', 'l', 'l', 'o'};

<details><summary>1. Question : If you want to store <b>10a+b</b> which variable type you use (click here to reveal the answer</summary>
Ans : None of those type can't
</details>

#### Keyterms
Before Going further you need to store some key terms in you memory stack(Your Brain). The terms are
- main : it is the entry point of the program much like the gate of a school with no other entries
```c
main(){}
```
- declaration : It is basically telling the compiler that there is a Variables/function which is this type , it has this properties etc. *You can not use a variable or function without initializing it  much like you can not win a game without starting it ? .
```c
int a;
int someFunction(){}
```
- definition :  Definition is giving a value to a variable or giving meaning to a function(body of a function)
```c
a = 10; 
int someFunction(){printf("This is a function");}
```

- initialization : Initialization means the process of assigning a value to a variable at the time of its definition
```c
a = 10;
``` 


> [!INFO]
> In summary 
> main -> entry point of the program
> declaration -> telling the compiler that there is a new variable/function
> definition -> giving its value or giving meaning to function 
> initialization -> as the name suggests initializing a variable 

> [!INFO] 
> Definition and Initialization may seem confusing at the fist time [Check out this article to know more](https://stackoverflow.com/questions/23345554/what-distinguishes-the-declaration-the-definition-and-the-initialization-of-a-v#:~:text=For%20a%20variable%2C%20a%20definition,assign%20a%20value%20to%20it.)



#### Declaring Multiple Variables
We have already seen an a multi variable declaration and its syntax goes like this

##### Syntax
```
type variableName1,anotherVariableName ;
```
- You can see that i have separated the variable names with `,` just a comma and 


### Format Specifiers

Now the outputting part ,

- Consider you are asked to do good old math problem, calculating the are a of a`square` which is

$$
area = length^2
$$

- You have calculated it and you stored it into a variable called `area` , the program for calculating the area is as follows

```c
main(){
int length =10 
int area = length * length ;
}
```

- well you have calculated your area but in order to print the value you need to use `printf()` but how do you specify `where to` and `which to` print he value like if i want the result to be like
> Result = 100
- or
> 100 = Result
- In the first output the value of the area is printed after `=` sign and in second output the value of the `area` is printed first
- **So we will use format specifiers** to specify which `data type` and where to print it

```c
main(){
int length =10 
int area = length * length ;
}
printf("Result = %d",area); 
```

- for second output


```c
main(){
int length =10 
int area = length * length ;
printf("%d = Result",area); 
```

Different

#####  Different data types and its format specifiers

```c
int number = 10;       //whole number
printf("%d\n", number);
float floating_point_number = 0.99;// Floating point number
printf("%f\n", floating_point_number);
char letter= 'I';       // Character
printf("%c\n", letter);
```
<details><summary>Output:</summary>
</details>

| Type   | Format Specifiers |
| ------ | ----------------- |
| int    | %d or %i          |
| float  | %f                |
| char   | %c                |
| string | %s                |


#### Constants

