#include<stdio.h>
int main()
{
int sum,n,r;
printf("input the value of n:");
scanf("%d",&n);
while(n!=0)
{r=n%10;
sum=sum*10+r;
n=n/10;
}
printf("reversed number is %d", sum);














    return 0;
}