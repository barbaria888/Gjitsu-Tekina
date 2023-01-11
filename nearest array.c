#include<stdio.h>
int main()
{//entering value  from user
int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
  scanf("%d",&arr[i]);
  }
  //inputting the required element
  int el;
  printf("enter element ");
  scanf("%d",&el);
  //searching if the element exists
  int f=0;
  for(int i=0;i<n;i++)
  {if(arr[i]==el)
   f=1;
   }
  // if it does,flag turns 1
  int s=0;
   if(f)
{for(int i=1;i<n;i++)
    if(arr[i-1]>el)
    s=arr[i-1];
    //it 
    else
        s=arr[i+1];
        printf("%d",s);}

else
printf("Not Found");






return 0;
}