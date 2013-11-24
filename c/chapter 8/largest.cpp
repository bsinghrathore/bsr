//largest number from matrix
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[5][5];


int i,j,big;
printf("enter the 5*5 matrix");
for(i=0 ; i<5; i++)
{
for(j=0 ; j<5 ; j++)
{
printf("\nvalue at %d row %d column\n ",i+1,j+1);
scanf("%d", &a[i][j] );
}
}
big=a[0][0];
printf("The 5*5 matrix is:\n\n");
 for(i=0;i<5;i++)
  {
   for(j=0;j<5;j++)
   {
    printf("%d\t",a[i][j]);
    if(a[i][j]>big)
     {
      big=a[i][j];
     }
    }
 printf("\n");
}
printf("\nThe largest no. in this matrix is: %d",big);
getch();
}  
