//Write a program to decode the message. 

#include <stdio.h>

int main()
{
    long int n,d,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%100;
        sum=sum*100+d;
        n/=100;
    }
    n=sum;
    while(n!=0)
    {
        d=n%100;
        printf("%c",d+64);
        sum=sum*100+d;
        n/=100;
    }
}
