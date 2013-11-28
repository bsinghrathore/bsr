
import java.util.Scanner;
public class leap{
public static void main(String args[])
{
int year;
System.out.println("enter the year");
Scanner in = new Scanner(System.in);
 
year= in.nextInt();

le(year);
}
public static  void le(int a)
{
if(a%4 == 0) 
  {
            
  if( a%100 == 0)
  { 
  if ( a%400 == 0)
  System.out.println("it is a leap year.\n");
  else 
  System.out.println("it is not a leap year");
  }
  else
 System.out.println("it is a leap year");
  }
  else
  {
  System.out.println("it is not a leap year");
}
}
}