
import java.util.Scanner;
public class recursion{
public static void main(String args[])
{
int num,sum;
System.out.println("enter the 5 digit number");
Scanner in = new Scanner(System.in);
 
num= in.nextInt();

sum=le(num);
System.out.println("sum of 5 digit number" +sum);
}
public static  int le(int a)
{
 int s=0,d;
    if(a==0)
  { 
   return (0);
  }
  d= a%10;
  s=s+d+le(a/10);
  return(s);
}
}