/*1]Initialize the two variables
2]Do bitwise operation x with 0xAAAAAAAA so we get all even bit
3]Do bitwise operation x with 0x55555555so we get all odd bit 
4]then do the shifting operation right shift for even bits and left shift for odd bits
5]Use logiacal OR opeartion to add both even and odd bits and return*/


#include <stdio.h>
//
unsigned int swapBits(unsigned int x)
{
//Declaration of two variables.
unsigned int even_bits = x & 0xAAAAAAAA;
unsigned int odd_bits = x & 0x55555555;
//Right shift all even bits.
even_bits >>= 1;  
//Left shift all odd bits.  
odd_bits <<= 1;
return (even_bits | odd_bits);
}
int main()
{
//assign the input number to variable x
    unsigned int x = 64;
    printf("%u ",swapBits(x));
        return 0;
}
