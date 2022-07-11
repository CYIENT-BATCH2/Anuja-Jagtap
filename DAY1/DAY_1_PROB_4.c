 //reverse the number
#include <stdio.h>
int main()
{
    int num,tem,rev=0;
    printf("Enter the num\n");
    scanf("%d",&num);
    if(num>111111&&num<999999)
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
