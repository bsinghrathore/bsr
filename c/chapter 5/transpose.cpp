//transpose of matrix
#include<stdio.h>
#include<conio.h>
int print(int p[4][4]);
int main()
{
int a[4][4] , b[4][4];
int i, j;                                   
printf(" Enter the elements of 4*4 matrix\n");
for(i=0; i<4; i++)
{
for(j=0; j<4; j++)
{
printf("\n value  at %d row %d column\n ",i+1,j+1);
scanf("%d" , &a[i][j] );
}
}
print(a);
for(i=0; i<4; i++)
{
for(j=0; j<4; j++)
{
b[i][j] = a[j][i];
}
}
printf("after transpose\n\n");
print(b);
getch();
}                                      
int print(int p[4][4])
{
    int i,j;
printf(" Matrix\n\n");
 for(i=0; i<4; i++)
 {
  for(j=0; j<4; j++)
  {
   printf("%d\t" , p[i][j] );                            
  }                                                          
  printf("\n");                                       
 }
}
