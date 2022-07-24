/*1]Initialize the variable and assign the hexadecimal value to the variable
2]write the logic to convert littile endian to big endian
3]set msb bit and store in another variable and 
4]do right shift and left shift operation for swapping
5]then add both and it will store in one variable we get swapped value.set lsb bit by anding operation*/


#include<stdio.h>
int main()
{
 //Declare the hex variable.  
    int a=0x18;              
//logic to convert little endian to big endian.      
    a=(a>>4&0x0f)|((a&0x0f)<<4);  
   //print updated value of a.
    printf("%x \n",a);            
  //check the binary value of hex value to convert little endian to big endian.
    for(int i=8;i>=0;i--)
    {
 //upadated value of a is right shifted with i.
        int k=a>>i;    
  //if condition is true replace 0 with 1.
    if(k&1)
    printf("1");
    else
//if condition is false replace 1 with 0.
    printf("0");
    }
}
