
#include <stdio.h>

int main()
{                 
    int d;
    printf("enter the number of day of the week");
    scanf("%d",&d);
    switch(d)
    {case 1:
    printf("MONDAY");
    break;
    case 2:
    printf("TUESDAY");
    break;
case 3:
    printf("WEDNESDAY");
    break;
    case 4:
    printf("THURSDAY");
    break;
    case 5:
    printf("FRIDAY");
    break;
    case 6:
    printf("SATURDAY");
    break;
    case 7:
        printf("SUNDAY");
        break;
     default:
    printf("enter no. between 1-7");
    }
    return 0;
}