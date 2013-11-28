
import java.util.Scanner;
public class add{
public static void main(String args[])
{
  int[][] a=new int[6][6];
  int[][] b=new int[6][6];
  int[][] sum=new int[6][6];
System.out.println("enter first  array\n");
Scanner in = new Scanner(System.in);
for(int i=0;i<6;i++)
    {
for(int j=0;j<6;j++)
{    
a[i][j] = in.nextInt();
}
}
System.out.println("enter second  array\n");
for(int i=0;i<6;i++)
    {
for(int j=0;j<6;j++)
{    
b[i][j] = in.nextInt();
}
}

  System.out.println("new array after addition\n");
for(int i=0;i<6;i++)
    {
for(int j=0;j<6;j++)
{     
sum[i][j]= a[i][j]+b[i][j];
    
}
}
for(int i=0;i<6;i++)
    {
for(int j=0;j<6;j++)
{     
System.out.println(sum[i][j]);
    
}
}

 

 
}
}