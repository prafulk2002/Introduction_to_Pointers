#include<stdio.h>
#include<conio.h>
int main()
{
int n=5 ,*ptr;
ptr=&n;
printf("number=%d\n",n);
printf("number acess using pointer=%d\n",*ptr);
*ptr=10;
printf("number after modification=%d",*ptr);
}