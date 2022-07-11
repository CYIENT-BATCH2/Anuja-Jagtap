//Find whether a given 10-digit number is palindrome or not. 
/*1)include the header file
2)read the digit from the user
3)write the condition for divide each number and check whether it is polindrome or not
4)print the output*/

#include<stdio.h>  
int main()  
{
int n,j,k=0,m;
  printf("enter the number\n");
  scanf("%d",&n);
  m=n;
  loop:if(n>0)
{
      j=n%10;
      k=k*10+j;
      n=n/10;
  
  goto loop;
 }
 if(m==k)
 printf("number is polindrome %d\n",k);
 else
 printf("number not is polindrome %d\n");
    return 0;
}
