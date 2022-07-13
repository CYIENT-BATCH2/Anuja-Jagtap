//Write program to check given i/p by user is alphabet or not alphabet using conditional operator.



#include <stdio.h>
int main()
{
  char ch;
  printf("enter the charcter\n");
  fflush(stdout);
  scanf("%c",&ch);
  ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))?printf("Alphabet"):printf("Not Alphabet");
}
