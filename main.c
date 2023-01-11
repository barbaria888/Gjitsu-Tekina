/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int L = 20;
  int B = 30;
  int H = 10;
  int VOLUME;
  VOLUME = L * B * H;
  printf ("the volume of the wall is:%d cubic cm \n", VOLUME);

  int l = 2;
  int b = 3;
  int h = 1;
  int volume;
  volume = l * b * h;
  printf ("the volume of one brick is:%d cubic cm\n", volume);
  int n;
  n = VOLUME / volume;
  printf ("therefore the number of bricks in the wall is:%d \n", n);

  return 0;
}
