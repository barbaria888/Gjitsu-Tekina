#include<stdio.h>
int main()
{
 int m,n;
 printf("enter the rows:");
 scanf("%d",&m);
 printf("enter the columns:");
scanf("%d",&n);
int matrix[m][n];
for(int i=0;i<m;i++)
{for(int j=0;j<n;j++)
{scanf("&d",&matrix[i][j]);
}
}
for(int i=0;i<m;i++)
{for(int j=0;j<n;j++)
{printf("&d",matrix[i][j]);
}
printf("\n");
}
return 0;}
