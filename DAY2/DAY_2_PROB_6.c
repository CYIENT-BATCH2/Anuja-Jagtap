//Write a program to convert Celsius form of temperature into Fahrenheit and vice versa.


   #include <stdio.h>

    int main() 
  {
    float fh,cl;
    printf("enter the temp in cl:\n");
    scanf("%f",&cl);
    fh=(cl*1.8)+32;
    printf("%2fcl = %2ffh\n",cl,fh);
    printf("enter the temp in fh:\n");
    scanf("%f",&fh);
    cl=(fh-32)/1.8;
    printf("%2f fh = %2f cl\n",fh,cl);
    return 0;
    }

