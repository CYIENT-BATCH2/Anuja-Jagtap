/*Declaration for variables for given problem.
Take the input from user.
In given problem take the 3 bytes of SteeringAngle.
Find out the steering information by using left shift and's with 1*/

#include<stdio.h>
int main()
{
    int reg0,reg1,reg2;
    signed SteeringAngle_sint = -60;
unsigned char SteeringInformation_Byte[3u];
reg0= SteeringAngle_sint|(0x00);
printf("SteeringAngle_sint reg0:");
printf("%x %x ",((reg0>>7)&1),(reg0>>6)&1);
printf("\n");
reg1=SteeringAngle_sint|(0x00);
printf("SteeringAngle_sint reg1:");
for(int i=7;i>=0;i--)
{
    printf("%x ",(reg1>>i)&1);
}
    reg2= SteeringAngle_sint|(0x00);
    printf("\n");
printf("SteeringAngle_sint reg0:");
printf("%x %x ",((reg0>>1)&1),(reg0>>2)&1);
printf("\n");
}
