#### Hello World
```c
#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}
```
#### Comments
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

#### Variables
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
> Int is like our whole number which is a natural numbers plus negetive numbers
> ie 
$$
int \in (Natural \ Numbers + -(Natural\  Nubers))
$$
> - Example
> ```c
> int a = 10;



> [!NOTE] 
> It is for storing floating point numbers eg : `10.10` `3.14159`
> - Example
>```c
>float x = 12.222


