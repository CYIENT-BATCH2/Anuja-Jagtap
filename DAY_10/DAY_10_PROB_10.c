/*1]Declaration for variables in given problem.
2]Take the input from user.
3]For given problem take 5byte engine information.
4]Find out the unsiginedchar engine temperature and engine rmp by using left shift operator.*/

#include <stdio.h>
int main()
{
   int rq0,rq1,rq2,rq3,rq4;
 int  Temperature_uchar =50u ;
int EngineRpm_uint =1000u;
int EngineInformation_Byte[5];
rq0= Temperature_uchar&(0x00);
for(int i=7;i>=0;i--){
     int n=(rq0>>i)&1;
     printf("%x ",n);
 }
 printf("\n");
rq1=Temperature_uchar&(0x00);
for(int i=7;i>=0;i--){
     int n=(rq1>>i)&1;
     printf("%x ",n);
 }
 printf("\n");
 rq2=Temperature_uchar&(0x00);
 for(int i=7;i>=0;i--){
     int n=(rq2>>i)&1;
     printf("%x ",n);
 }
  printf("\n");
 rq4=Temperature_uchar&(0x00);
 for(int i=7;i>=0;i--){
     int n=(rq4>>i)&1;
     printf("%x ",n);
 }
  printf("\n");
  rq3=Temperature_uchar|(0x00);
  printf("rq3 value:");
 for(int i=7;i>=0;i--){
     int n=(rq3>>i)&1;
     printf("%x ",n);
 }
 printf("\n");
     rq0=EngineRpm_uint|(0x00);
       printf("EngineRpm_uint rq0 value:");
     for(int i=4;i>=0;i--){
         printf("%x ",(rq0>>i)&1);
     }
     printf("\n");
     rq1=EngineRpm_uint|(0x00);
      printf("EngineRpm_uint rq1 value:");
     for(int i=7;i>=0;i--){
         printf("%x ",(rq1>>i)&1);
}
printf("\n");
 rq2=EngineRpm_uint|(0x00);
  printf("EngineRpm_uint rq2 value:");
         printf("%x ",(rq2>>7)&1);
         printf("\n");
 rq3=EngineRpm_uint&(0x00);
  printf("EngineRpm_uint rq3 value:");
 for(int i=7;i>=0;i--){
         printf("%x ",(rq3>>i)&1);
 }
 printf("\n");
 rq4=EngineRpm_uint&(0x00);
  printf("EngineRpm_uint rq4 value:");
 for(int i=7;i>=0;i--){
         printf("%x ",(rq4>>i)&1);
}
}
