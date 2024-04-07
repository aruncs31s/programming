### Hello World
```c
#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}
```
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

### Variables
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

| Variables Type | Defenition    |
| -------------- | ------------- |
| int            | Whole Numbers |

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
> 
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

- well you have calculated your are a but in order to print the value you need to use `printf()` but how do you specify `where to` and `which to` print he value like if i want the result to be like
> Result = 100
- or
> 100 = result
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


#####  Diffrent data types and its format specifiers

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

