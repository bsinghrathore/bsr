
import java.util.Scanner;
public class largest{
public static void main(String args[])
{
  int[][] a=new int[5][5];
  int b,i,j;
System.out.println("enter a 5*5 array\n");
Scanner in = new Scanner(System.in);
for(i=0;i<5;i++)
    {
for(j=0;j<5;j++)
{    
a[i][j] = in.nextInt();
}
}
b=a[0][0];

 for(i=0;i<5;i++)
  {
   for(j=0;j<5;j++)
   {
System.out.println(a[i][j]);
    if(a[i][j]>b)
     {
      b=a[i][j];
     }
    }
System.out.println("\n");
    }

System.out.println("\nThe largest no. in this matrix is:"+b);
}  
}

 

 
