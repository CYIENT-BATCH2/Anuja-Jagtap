/*Set the bits TM0ON and PSA which are in 7th position(TM0ON) and 3rd position(psa)
Take some hex value which is stored in a variable called n
Store the positions in variables
Then one is left shifted with 3(position) this can be ORed with one is again left shifted with 7 position
That final result can be again ORed with n which is having hex value.Then print n value as output*/


#include<stdio.h> 
int main(){ 
    //Declare the 3 variables.
    int n=0xfa; 
    int pos=3; 
    int pos1=7;
    //logic for setting the bit 3 and bit 7. 
    n=n|(1<<pos)|(1<<pos1); 
    //print the outpt after setting the bit.
    printf("%x",n); 
} 
