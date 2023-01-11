#include<stdio.h>
int main()
{
int k;
scanf("%d",&k);
for(int i=0;i<=k;i++)
{
signed long int M,N,i;
scanf("%ld",&M);scanf("%ld",&N);
i=(M+N);
i=i%2;

if(i==0)
{signed long int B,G;
G=(N/2);
B=(M/2); 

printf("%ld",G);
printf("%ld",G);


}
else
printf("not possible");


















}

































    return 0;
}