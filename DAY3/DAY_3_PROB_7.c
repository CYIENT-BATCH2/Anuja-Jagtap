//Write program to calculate the age of a person based on year, month as i/p



#include<stdio.h>
int main()
{
  int yr,age,mth;
  float y,m;
  printf("enter your year\n");
  scanf("%d",&yr);
  printf("enter your month\n");
  scanf("%d",&mth);
  y=(2022-yr)*12;
  m=(7-mth);
  age=(y-m)/12;
  printf("Age=%d",age);
}
  
