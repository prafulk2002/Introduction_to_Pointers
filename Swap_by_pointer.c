#include<stdio.h>
#include<conio.h>
void swap(int *p, int*q)
{
int i;
i=*p;
*p=*q;
*q=i;
}
int main()
{
int a,b;
printf("Enter the two number to be swap");
scanf("%d %d",&a ,&b);
printf("Before swapping:\na=%d,b=%d",a,b);
swap(&a ,&b);
printf("\nAfter swapping:\na=%d,b=%d",a,b);
return 0;
} 







