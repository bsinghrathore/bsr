//program to multiply two matrices
#include<stdio.h>
#include<conio.h>
int input(int a[3][3]);
int product(int x[3][3],int y[3][3],int z[3][3]);
int print(int p[3][3]);
int main()
{
int x[3][3],y[3][3],z[3][3]; 
printf("enter the elements in first 3*3 matrix\n");
input(x); 
printf("enter the elements in second 3*3 matrix\n");
input(y); 
print(x);
print(y);
product(x,y,z);
getch();
}
int input(int a[3][3])
{ 
  int i,j;
  
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
     printf("\n value  at %d row %d column\n ",i+1,j+1);
     scanf("%d",&a[i][j]);
    }
  }
                     
}
int print(int p[3][3])
{
    int i,j;
printf(" Matrix\n\n");
 for(i=0; i<3; i++)
 {
  for(j=0; j<3; j++)
  {
   printf("%d\t" , p[i][j] );                            
  }                                                          
  printf("\n");                                       
 }
}
int product(int x[3][3],int y[3][3],int z[3][3])
{
int i,j,k,sum;
for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
        sum = 0;            
    for(k=0;k<3;k++)
     {
      sum = sum + x[i][k] * y[k][j];
     }
   z[i][j]=sum;
   
   }
  }
printf("product of two matrices\n\n");
  for(i=0; i<3; i++)
 {
   for(j=0; j<3; j++)
  {
   printf("%d\t" , z[i][j] );                            
  }                                                          
 printf("\n");                                       
 }
}
