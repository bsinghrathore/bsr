//calculate the area perimeter and cicumfrence of rectangle3 and circle
#include<stdio.h>
#include<conio.h>
int main()
{
    float l,b,arear,perr,areac,perc,r;
    printf("enter the length,breadth of rectangle and radius of circle\n");
    scanf("%f%f%f",&l,&b,&r);
    arear=l*b;
    perr=2*(l+b);
    areac=3.14*r*r;
    perc=2*3.14*r;
    printf("\n area of rectangle%f \n",arear);
    printf("\nperimeter of rectangle%f\n   ",perr);
    printf("\narea of circle%f \n"  ,areac);
    printf("\ncircumfrence of circle%f  ",perc);
    getch();
}

