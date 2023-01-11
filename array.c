#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int temp=0;
for(int i=0;i<(n-1);i++)
{
    temp=arr[i];
    arr[i]=arr[i-n-1];
    arr[i-n-1]=temp;
}
for(int i=0;i<n;i++)
{printf("%d\n",arr[i]);}

    return 0;      
}