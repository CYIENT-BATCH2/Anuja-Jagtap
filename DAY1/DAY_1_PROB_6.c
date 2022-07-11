/*Students with roll numbers 1-9 are seated in ascending order in an examination hall. There has been a slight mistake in their seating arrangement
where two consecutive roll numbers have been swapped. Choose these two consecutive numbers as per your choice and swap them back in their right 
places according to ascending order.*/

/*1)include the header file
2)read the digit from the user
3)write the condition checking greater than number with each other 
4)print the output */

#include <stdio.h>
int main(){
    int n1,n2,n3,n4,n5,n6,n7,n8,n9;
   scanf("%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);
    j:
           if (n1>n2) { n1+=n2; n2=n1-n2; n1-=n2;goto j; }
           if (n2>n3) { n2+=n3; n3=n2-n3; n2-=n3;goto j; }
           if (n3>n4) { n3+=n4; n4=n3-n4; n3-=n4;goto j; }
           if (n4>n5) { n4+=n5; n5=n4-n5; n4-=n5;goto j; }
           if (n5>n6) { n5+=n6; n6=n5-n6; n5-=n6;goto j; }
           if (n6>n7) { n6+=n7; n7=n6-n7; n6-=n7;goto j; }
           if (n7>n8) { n7+=n8; n8=n7-n8; n7-=n8;goto j; }
           if (n8>n9) { n8+=n9; n9=n8-n9; n8-=n9;goto j; }
    printf("%d,%d,%d,%d,%d,%d,%d,%d,%d",n1,n2,n3,n4,n5,n6,n7,n8,n9);
   }
