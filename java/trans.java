
import java.util.Scanner;
public class trans{
public static void main(String args[])
{
  int[][] a=new int[5][5];
  int[][] b=new int[5][5];
int i,j; 
System.out.println("enter a 5*5 array\n");
Scanner in = new Scanner(System.in);
for(i=0;i<5;i++)
    {
for( j=0;j<5;j++)
{    
a[i][j] = in.nextInt();
}
}
for( i=0;i<5;i++)
    {
for(j=0;j<5;j++)
{    
b[j][i] = a[i][j];
}
}

  System.out.println("new array after transpose\n");
 for(i=0;i<5;i++)
  {
   for(j=0;j<5;j++)
   {
    System.out.println("\t"+b[i][j]);
    }
 System.out.println("\n");
}
}
    
}

 

 
