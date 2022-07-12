 //find the total number of handshakes made by the students.


#include <stdio.h>

int main() {
    int n,h;
    printf("enter the no. of student:");
    scanf("%d",&n);
    h=(n*(n-1))/2;
    printf("no. of handshakes are:%d\n",h);
    
    return 0;
}
