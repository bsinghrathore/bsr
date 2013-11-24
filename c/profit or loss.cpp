//program to find profit or loss
#include<stdio.h>
#include<conio.h>
int main()
{
    int cp,sp,profit,loss;
    printf("enter the cost price =");
    scanf("%d",&cp);
    printf("enter the sale price =");
    scanf("%d",&sp);
    if(cp<sp)
    {
    printf("seller has made profit\n ");
    profit=sp-cp;
    printf("profit=%d ",profit);
    }
    else
    {
    printf("loss occur\n ");
    loss=cp-sp;
    printf("loss=%d ",loss);
    }
    getch();
}

    
