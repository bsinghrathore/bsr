
import java.util.Scanner;
public class pro{
public static void main(String args[])
{
  int[][] a=new int[3][3];
  int[][] b=new int[3][3];
  int[][] c=new int[3][3];
int i,j,k,sum; 
System.out.println("enter a 3*3 array\n");
Scanner in = new Scanner(System.in);
for(i=0;i<3;i++)
    {
for( j=0;j<3;j++)
{    
a[i][j] = in.nextInt();
}
}
System.out.println("enter a 3*3 array\n");
for(i=0;i<3;i++)
    {
for( j=0;j<3;j++)
{    
b[i][j] = in.nextInt();
}
}
for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
        sum = 0;            
    for(k=0;k<=2;k++)
     {
      sum = sum + a[i][k] * b[k][j];
     }
   c[i][j]=sum;
   
   }
  }

  System.out.println("new array after multiplication\n");
 for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    System.out.println("\t"+c[i][j]);
    }
 System.out.println("\n");
}
}
    
}

 

 
