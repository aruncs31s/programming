import java.util.Scanner;
class Main{
	public static void main(String[]args){
		Scanner scan = new Scanner(System.in);
		//Scanner b = new Scanner(System.in);
		System.out.print("Enter first Number\n");
		int a = scan.nextInt();
		System.out.print("Enter Second Number\n");
		int b = scan.nextInt();
		int sum = a + b ; 
		System.out.print("Sum is " + sum + "!\n");

	}
}
