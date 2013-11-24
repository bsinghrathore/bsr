//program to determine leap year or not


#include <stdio.h>
#include<conio.h>
 
int main()
{
  int year;
 
  printf("Enter a year to check if it is a leap year\n");
  scanf("%d", &year);
  if(year%4 == 0) 
  {
            
  if( year%100 == 0)
  { 
  if ( year%400 == 0)
  printf("%d is a leap year.\n", year);
  else 
  printf("it is not a leap year");
  }
  else
  printf("it is a leap year");
  }
  else
  {
  printf("it is not a leap year");
  }
  getch();
}




    
