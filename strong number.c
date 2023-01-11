#include<stdio.h>
void strong(int n);
int main()
{
int n;
printf("enter the number ");
scanf("%d",&n);
strong(n);
return 0;
}

#include<stdio.h>
void strong(int n)
void factor(int r);
{int r,sum=0,k=n,f;
        r=n%10;  
        factor(r);  
        k=k/10;  
        sum=sum+f;  
    if(sum==n)  
    {  
        printf("\nNumber is a strong");  
    }  
    else  
    {  
        printf("\nNumber is not a strong");  
    }  
 
}
void factor(int r)
{scanf("%d",r);
    int temp=r;
    for(int i=1;i<r;i++)
{
temp*=i;
}
}