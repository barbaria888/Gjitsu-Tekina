#include<stdio.h>
int main()
{int N,T,Ai,temp=0;
scanf("%d",&N);
for(int i=0;i<=N;i++)
{
scanf("%d",&T);
int arr[T];
for(int i=0;i<=T;i++)
{scanf("%d",&arr[i]);}

for(int i=0;i<T;i++)
{
Ai=arr[i]-arr[i-1];
Ai=temp;
if(Ai>temp)
printf("%d",temp);

}
}




















    return 0;
}
/*
difference==num2-num1;*/
