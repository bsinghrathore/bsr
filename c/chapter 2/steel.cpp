//program to grade steel
#include<stdio.h>
#include<conio.h>
int main()
{
int hardness, ts;

float carbon;

printf("Enter the values of hardness =");
scanf("%d", &hardness);
printf("Enter the values of carbon content =");
scanf("%f",&carbon);
printf("Enter the values of tensile strength =");
scanf("%d",&ts);

if ((hardness>50) && (carbon<0.7) && (ts>5600))
 {
  printf("steel Grade 10");
 }
else if ((hardness>50) && (carbon<0.7))
 {
  printf("steel Grade 9");
 }
else if ((carbon<0.7) && (ts>5600))
 {
  printf("steel Grade 8");
 }
else if ((hardness>50) && (ts>5600))
 {
  printf("steel Grade 7");
 }
else if ((hardness>50) || (carbon<0.7) || (ts>5600))
 {
  printf("steel Grade 6");
 }
else
 {
  printf("steel Grade 5");
 }
getch();

}



