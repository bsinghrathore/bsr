
import java.util.Scanner;
public class power{
public static void main(String args[])
{
int num1,num2,z;
System.out.println("enter the number 1");
Scanner in = new Scanner(System.in);
 
num1 = in.nextInt();
System.out.println("enter the number 2");
num2 = in.nextInt();
z=pow(num1,num2);
System.out.println("power num 1 raised to num 2  is = "+z);
}
public static  int pow(int a,int b)
{
int p=1;
for(int i=1;i<=b;i++)
    {
     p=p*a;
    }

return p;
}
}