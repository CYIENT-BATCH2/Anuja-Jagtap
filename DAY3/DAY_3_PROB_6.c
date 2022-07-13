//Write program to accept hex value as i/p and right shift bit value also as i/p and print the value after doing the hex right shift.
#include <stdio.h>
int main()
{
  int num,bit;
  printf("enter the hex value\n");
  fflush(stdout);
  scanf("%x",&num);
  printf("enter the bit value\n");
  fflush(stdout);
  scanf("%d",&bit);
  printf("%d",num>>bit);
}
  
