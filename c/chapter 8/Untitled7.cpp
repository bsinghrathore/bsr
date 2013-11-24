#include<stdio.h>
#include<conio.h>
void sort(int a[10][10],int,int);
int main()
{
int i,j,m,n,a[10][10];

printf("Enter the order");
scanf("%d%d",&m,&n);
printf("Enter the matrix");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n the matrix is:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\n%d",a[i][j]);
}
}
sort(a,m,n);
getch();
}
void sort(int a[10][10],int m,int n)
{
int i,j,temp;
for(i=0;i<m;i++)
{
for(j=0;j<n-1;j++)
{
if(a[i][j]>a[i][j+1])
{
temp=a[i][j];
a[i][j]=a[i][j+1];
a[i][j]=temp;
}
}
}
printf("\n The sorted matrix is:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\n%d",a[i][j]);
}
}
}
