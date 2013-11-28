

public class arr{
public static void main(String args[])
{
  int[] an={0,1,2,3,4,5,6,7,8,9};
  int product;
  System.out.println("new array after operation\n");
for(int i=0;i<10;i++)
    {
     product= mul(an[i]);
     System.out.println(product);
    }
}

public static  int mul(int a)
{
   int d;
  d=a*3;
  return(d);
}
}