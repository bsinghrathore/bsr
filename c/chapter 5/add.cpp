//program to add two matrices
#include<stdio.h>
#include<conio.h>
int input(int a[6][6]);
int add(int x[6][6],int y[6][6],int z[6][6]);
int main()
{ 
int x[6][6],y[6][6],z[6][6]; 
printf("enter the elements in first 6*6 matrix\n");
input(x); 
printf("enter the elements in second 6*6 matrix\n");
input(y); 
add(x,y,z);
getch();
}
int input()
{ 
  int i,j;
  int a[6][6];
  for(i=0;i<6;i++)
  {
    for(j=0;j<6;j++)
    {
     printf("\n value  at %d row %d column\n ",i+1,j+1);
     scanf("%d",&a[i][j]);
    }
  }
  printf("matrix\n\n");
  for(i=0; i<6; i++)
  {
   for(j=0; j<6; j++)
   {
    printf("%d\t" , a[i][j] );                            
   }                                                          
  printf("\n");
  }                   
}
int add(int x[6][6],int y[6][6],int z[6][6])
{
   int i,j;
    for(i=0;i<6;i++)
     {
     for(j=0;j<6;j++)
     {
      z[i][j]=(x[i][j] + y[i][j]);
      }
     }
    
     for(i=0; i<6; i++)
   {
   for(j=0; j<6; j++)
   {
    printf("%d\t" ,z[i][j] );                            
   }                                                          
  printf("\n");                                       
 }

}
