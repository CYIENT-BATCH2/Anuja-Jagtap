//Q) balls are numbered with random 1-digit number each. Assign these numbers using user input. Print whether each ball is assigned odd or even number.
//1)include the header file
//2)read the digit from the user
//3)write the condition for divide each number 2 
//4)print the output

#include<stdio.h>
int main()
{
     int n;
     printf("enter the digit \n");
     scanf("%d",&n);
    if(n%2==0)
    printf("given number is even %d\n",n);
    else
    printf("given number is odd %d\n",n);
    return 0;
}
