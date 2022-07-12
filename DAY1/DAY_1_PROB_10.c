//Consider the weights of three people as user input. Find the heaviest among them and print it.


/*1)include the header file
2)read the digit from the user
3)write the condition by checking each other numbers
4)print the output*/


#include <stdio.h>

int main() {
    int n1,n2,n3;
    printf("Enter the wt.\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    if((n1>n2)&&(n1>n3))
    printf("Biggest wt. is a=%d\n",n1);
    else if((n2>n3)&&(n2>n1))
    printf("Biggest wt. is b=%d\n",n2);
    else
    printf("Biggest wt. is c=%d\n",n3);
}
