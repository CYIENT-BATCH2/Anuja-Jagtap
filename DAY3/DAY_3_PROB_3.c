//Write a program to reverse a 3-digit number which is entered from keyboard.

#include <stdio.h>
int main()
{
    int num,tem,rev=0;
    printf("Enter the num\n");
    scanf("%d",&num);
    if(num>000&&num<999)
    {
      L:if(num>0)
      {
        tem=num%10;
        if(tem!=0)
        rev=rev*10+tem;
        num/=10;
        goto L;
      }
      printf("reverse =%d",rev);
    }
}
