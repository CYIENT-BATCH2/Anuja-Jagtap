//Find the number of leap years in the interval 1990-2022.



    #include <stdio.h>

int main() {
    int a,b,i;
    printf("enter the start year:\n");
    scanf("%d",&a);
    printf("enter the end year:\n");
    scanf("%d",&b);
    printf("leap years:\n");
    for(i=a;i<=b;i++)
    {
        if((i%4==0)&&(i%100!=0)||(i%400==0))
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
