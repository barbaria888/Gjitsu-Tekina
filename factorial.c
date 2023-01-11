#include <stdio.h>
int main()
{
    long n,i,f;
    f=i=1;
    
    printf("Enter a Number to Find Factorial: ");
    scanf("%lf",&n);
    while(i<=n)
    {
        f*=i;
        i++;
    }
    printf("The Factorial of %lf is : %lf",n,f);
    return 0;
}
