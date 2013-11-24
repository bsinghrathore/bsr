#include <stdio.h>
#include <conio.h>

int main()
{
int arr[10];
int i;
printf("Enter the elements of the array\n");
for(i=0;i<10;i++)
 {
  scanf("%d",&arr[i]);
 }
  modify(&arr);
printf("New array is given by\n");
for(i=0;i<10;i++)
printf("%d ",arr[i]);
getch();
}
modify(int *arr[10])
{
int i,k;
for(i=0;i<10;i++)
 {
  k=arr[i];
  k=k*3;
  arr[i]=k;
 }
}
