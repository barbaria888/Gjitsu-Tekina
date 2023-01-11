#include <stdio.h>

int main()
{
    int amt,amt1,amt2,tt,fh,th,h;
    printf("enter the amount in multiples of 100:");
    scanf("%d",&amt);
    amt1=amt-100;
    amt2=amt;
    tt=amt/2000;
    amt=amt%2000;
    fh=amt/500;
    amt=amt%500;
th=amt/200;
amt=amt%200;
h=(amt/100)+1;
amt=amt%100;
printf("Amount:%d\n2000:%d\n500:%d\n200:%d\n100:%d\n",amt2,tt,fh,th,h);



    return 0;
}
