

public class fibo{
public static void main(String args[])
{
 
     int i=0,j=1;


    System.out.println("Fibonacci Series: ");
    System.out.println("0");
    fibonacci(23);

  
}

public static  void fibonacci (int a)
{
 int prev, next, sum, n;
		prev=1;
                   next=1;
		for(n=1;n<=a;n++)
		{
			System.out.println(prev);
			sum=prev+next;
			prev=next;
			next=sum;
		}
}
}