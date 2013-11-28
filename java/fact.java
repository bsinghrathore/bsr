
import java.util.Scanner;
public class fact{
public static void main(String args[])
{
int num;
System.out.println("enter the number");
Scanner in = new Scanner(System.in);
 
num = in.nextInt();
int b=fac(num);
System.out.println("Factorial of is = "+b);
}
public static  int fac(int a)
{
int factorial = 1;
while (a>1)
{
factorial=factorial*a;
a= a-1;
}
return factorial;
}
}