/*
(D)BITWISE OPERATOR
ALGORITHM:
steps 
1.apply the expression as question given .
*/

#include <stdio.h>
int main() {
     
    int i=10,j=20,k=30;
    printf("value of k=%d\n",i&&j&k);
    printf("value of k=%d\n",i&j|k&&i);
    printf("value of k=%d\n",i||j&j);
    printf("value of k=%d\n",i||j&(j&&k));
    return 0;
}
