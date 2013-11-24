//program to multiply two matrices
#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
    int sum=0;
    printf("enter the elements in first 3*3 matrix\n");
 
 for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
     printf("\n value  at %d row %d column\n ",i+1,j+1);
     scanf("%d",&a[i][j]);
    }
    printf("enter the elements in second 3*3 matrix\n");
 
 for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
     printf("\n value  at %d row %d column\n ",i+1,j+1);
     scanf("%d",&b[i][j]);
    }
    printf("1st matrix\n\n");
 for(i=0; i<3; i++)
 {
  for(j=0; j<3; j++)
  {
   printf("%d\t" ,a[i][j] );                            
  }                                                          
 printf("\n");                                       
 }
 printf("2nd matrix\n\n");
  for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%d\t" ,b[i][j]);                            
  }                                                           
 printf("\n");                                       
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
   printf("product of two matrices\n\n");
  for(i=0; i<3; i++)
 {
   for(j=0; j<3; j++)
  {
   printf("%d\t" , c[i][j] );                            
  }                                                          
 printf("\n");                                       
 }
getch();
}
