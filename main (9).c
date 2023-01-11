
#include<stdio.h>
int main()
{char a;
printf("enter the letter\n");
scanf("%c",&a);
if(a=='a'||a=='i'||a=='u'||a=='o'||a=='e'||a=='A'||a=='I'||a=='O'||a=='U')
printf("%c is a vowel",a);
else
printf("%c is consonant",a);
return 0;
}
