//Consider a character input and find its ASCII value. 
/*1)include the header file
2)read the charector input from the user
3)print the output with %d format specifier */

#include<stdio.h>
int main()
{
  char ch;
  printf("enter charector:\n");
  scanf("%c",&ch);
  printf("ASCII value:%d",ch);
}
