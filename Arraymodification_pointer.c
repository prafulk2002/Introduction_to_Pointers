#include<stdio.h>
#include<conio.h>
int main()
{
int a=10, b=20 ,c=30;
int *ptr[3];
ptr[0]=&a; 
ptr[1]=&b;
ptr[2]=&c;
printf("value of:\na= %d \n b=%d \n c=%d ",*ptr[0],*ptr[1],*ptr[2]);
*ptr[0]+=10;
*ptr[1]+=5;
*ptr[2]+=15;
printf("\nvalue of after modification:\n a=%d \n b=%d \n c=%d",*ptr[0],*ptr[1],*ptr[2]);
getch();
}
