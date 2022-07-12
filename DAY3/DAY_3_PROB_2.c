//Write a program to calculate the sum of the first and the second last digit of a 5-digit number entered from the keyboard.

#include <stdio.h>

int main()
{
   int num,rem,cnt=0,sum=0;
   printf("enter the number\n");
   scanf("%d",&num);
   loop:
   if(num!=0)
   {
       rem=num%10;
       cnt++;
       if(cnt==2 || cnt==5)
       sum=sum+rem;
       num/=10;
       goto loop;
   }
   printf("sum=%d",sum);
}
