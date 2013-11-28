
import java.util.Scanner;
public class digit{
public static void main(String args[])
{
int num;
System.out.println("enter the 5 digit number");
Scanner in = new Scanner(System.in);
 
num= in.nextInt();

le(num);
}
public static  void le(int a)
{
 int sum=0,dig;
    while(a!=0)
    {
      dig=a%10;
      sum=sum+dig;
      a=a/10;
    }
    System.out.println("sum of digits= "+sum);
}
}