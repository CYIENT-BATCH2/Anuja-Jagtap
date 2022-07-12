//Write a program to convert the 2-digit ID to binary form.

#include <stdio.h>

int main()
{
    long int num;
    printf("Enter the number\n");
    scanf("%ld",&num);
    for(int bit=7;bit>=0;bit--)
    {
        printf("%d",(num>>bit)&1);
    }
}
