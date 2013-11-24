//transpose of matrix
#include<stdio.h>
#include<conio.h>
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

printf(" Matrix is\n");
for(i=0; i<4; i++)
{
for(j=0; j<4; j++)
{
printf("%d\t" , a[i][j] );                            
}                                                          
printf("\n");                                       
}


for(i=0; i<4; i++)
{
for(j=0; j<4; j++)
{
b[i][j] = a[j][i];
}
}

printf(" After Transpose\n");
for(i=0; i<4; i++)
{
for(j=0; j<4; j++)
{
printf("%d\t" , b[i][j] );                            
}                                                          
printf("\n");                                      
}

getch();
}                                      
