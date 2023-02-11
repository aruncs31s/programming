# progarmming


- [Assembly](#assembly)
   - [8051](/assembly)
   - [Atmega32](/atmega32)
- [MATLAB](/MATLAB)
- [HTML](/html)

- [Java Scipt](/js)

- [Java](/java)

- [Python](/python)






## Java



<details><summary>Hello World!</summary>

```
class Main{

    public static void main (String args[]){
        System.out.print("Hello world");
    }
}
```

</details>
### If else programs>

#### Question : 1 
You have $12,000 to buy a car.
You're given a program which takes the price of car as an input.

Task
Output "yes" if the price is lower than or equal to 12,000.

Sample Input
11000

Sample Output
yes

```
import java.util.Scanner;

public class Main {

   public static void main(String[] args) {
       
       Scanner scanner = new Scanner(System.in);
       int price = scanner.nextInt();
      String out = (price <= 12000) ? "yes" : "" ;
       System.out.println(out);

     
   }
}
```


#### Question : 2 
The sales manager decided to give a gift card to the customers whose purchases total more than 15000. On top of this, the customers whose total purchase is above 30000 will receive a second gift card.
You are given a program, which takes the purchase amount as input, and print "Gift card" if it is above 15000.

Task
Complete the code to print "Gift card" again if the purchase is above 30000.
 
Sample Input
36000

Sample Output
Gift card
Gift card

```
import java.util.Scanner;

public class Main {
   public static void main(String[] args) {
       Scanner read = new Scanner(System.in);
       int purchases = read.nextInt();
       
       if(purchases > 15000){
        System.out.println("Gift card");
        //complete the code
        
        }
        if(purchases > 30000){
        System.out.println("Gift card");
        //complete the code
        
        }
    }
}

```

#### Question 3 
You're a tour manager and need a program that will identify small countries.
A country is considered small if its population is under 10000 and its area is under 10000 hectares.
The given program takes population and area as input.
 
Task
Complete the program to output "small country" if both conditions are met. Don't output anything otherwise.

Sample Input
9955
7522

Sample Output
small country


```
import java.util.Scanner;

public class Main {
   public static void main(String[] args) {
       Scanner read = new Scanner(System.in);
       int population = read.nextInt();
       int area = read.nextInt();
        //Complete the code
        if (population < 10000){
            if (area < 10000){
                System.out.println("small country");
            }
        }
   }
   
}

```

### switch 

#### Q : 

Your robot can recognize your emotions marked with number that represents each of them:
1 - You are happy!
2 - You are sad!
3 - You are angry!
4 - You are surprised!
Write a program that takes the emotion number as input and outputs the corresponding message in given format.
If the input is an emotion that the program doesn’t know, it should output: "Unknown emotion.".

Sample input
1

Sample output
You are happy!

```
import java.util.Scanner;

public class Main {
   public static void main(String[] args) {
       Scanner scanner = new Scanner(System.in);
       int emotion = scanner.nextInt();
       /*
       1 - "You are happy!"
       2 - "You are sad!"
       3 - "You are angry!"
       4 - "You are surprised!"
       other - "Unknown emotion."
       */
       
       // your code goes here
       
       switch (emotion){
           case 1:
            System.out.println("You are happy!");
           break;
           case 2:
            System.out.println("You are sad!");
           break;
           
           case 3:
            System.out.println("You are angry!");
           break;
           case 4 : 
            System.out.println("You are surprised!");
           
           break ;
           default: 
           System.out.println("Unknown emotion.");
           break ;
       }
       
   }
}

```



