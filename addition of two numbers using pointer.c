#include<stdio.h>
void main()
{
int* p1,*p2;
int a,b;
printf("enter the number");
scanf("%d",&a);
printf("enter the number\n");
scanf("%d",&b);
p1=&a;
p2=&b;
int res;
res=((*p1)+(*p2));
printf("the sum of %d and %d is %d ",a,b,res);
}