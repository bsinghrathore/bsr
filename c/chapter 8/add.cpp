//program to add two matrices
#include<stdio.h>
#include<conio.h>

int main()
{
int i,j,a[6][6],b[6][6],c[6][6];
printf("enter the elements in first 6*6 matrix\n");
 
 for(i=0;i<6;i++)
    for(j=0;j<6;j++)
    {
     printf("\n value  at %d row %d column\n ",i+1,j+1);
     scanf("%d",&a[i][j]);
    }

printf("enter the elements in second 6*6 matrix\n");
 
 for(i=0;i<6;i++)
    for(j=0;j<6;j++)
    {
     printf("\n value  at %d row %d column\n ",i+1,j+1);
     scanf("%d",&b[i][j]);
    }
    printf("1st matrix\n\n");
for(i=0; i<6; i++)
{
  for(j=0; j<6; j++)
 {
   printf("%d\t" , a[i][j] );                            
 }                                                          
 printf("\n");                                       
}
printf("2nd matrix\n\n");
for(i=0; i<6; i++)
{
  for(j=0; j<6; j++)
 {
   printf("%d\t" , b[i][j] );                            
 }                                                          
 printf("\n");                                       
}

for(i=0;i<6;i++)
 {
    for(j=0;j<6;j++)
    {
    c[i][j] = a[i][j] + b[i][j] ;
    }
 }    
    printf("sum of two matrices\n\n");
  for(i=0; i<6; i++)
 {
   for(j=0; j<6; j++)
  {
   printf("%d\t" , c[i][j] );                            
  }                                                          
 printf("\n");                                       
 }
getch();
}

