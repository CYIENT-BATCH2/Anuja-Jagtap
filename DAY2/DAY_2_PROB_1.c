//Consider the phone number of a person as user input and find the sum of its digits. 

#include <stdio.h>
int main()
{
  long int n,s=0,r=0;
  printf("enter mob. no.\n");
  scanf("%ld",&n);
  l:
  if(n)
  { r=n%10;s=s+r;n=n/10;goto l;}
  printf("%ld",s);
}
