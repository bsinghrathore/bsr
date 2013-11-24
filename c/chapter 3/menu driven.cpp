//menu driven program
#include<stdio.h>
#include<conio.h>

int main()
{
 int choice;
 printf("press 1 to find the factorial of number\n");
 printf("press 2 to find the number is prime or not\n");
 printf("press 3 to find the number is odd or even\n");
 printf("press 4 to exit\n");
 scanf("%d",&choice);
 switch(choice)
 { 
   case 1:                     //case 1
   int num,factorial;
   printf("Enter the number =:");
   scanf ("%d",&num);
   factorial=1;
   while ( num > 1)
   {
    factorial=factorial*num;
    num= num-1;
   }
   printf("The factorial of the entered number is:%d", factorial);
   break;
   
   case 2:               //case 2
   int number, div, ifprime;
   printf("enter the number");
   scanf("%d",&div);
   for (number=2;number<div;number++)

    {

    {
     if (div%number==0)
     {

      ifprime=0;
      break;
      }

     ifprime=1;

   }
}

if (ifprime)
{
printf("\nnumber is prime");
}
else
 {  
  printf("number is not prime");
 }
 break;
  
   case 3:         //case 3
        
   int n;
   printf("enter the number =");
   scanf("%d",&n);
   if(n%2==1)
    {
      printf("number is odd");
    }
   else 
    {
     printf("number is even");  
    }
    break;
    case 4:              //case 4
    break;
    
 }     
    getch();
}        
       
