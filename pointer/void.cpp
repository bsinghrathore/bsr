#include<iostream.h>
#include<conio.h>
int main()
{
int intvar; 
float flovar; 
int* ptrint; 
float* ptrflo; 
void* ptrvoid; 
ptrint = &intvar; 
ptrflo = &flovar; 
ptrvoid = &intvar; 
ptrvoid = &flovar; 
getch();
}
