// check vowels or not
#include <stdio.h>
#include<string.h>
int main()
{
    char s1;
    int cnt=0;
    printf("Enter the number\n");
    scanf("%s",&s1);
    if(s1=='a'|| s1=='e'|| s1=='i'|| s1=='o' || s1=='u'|| s1=='A' || s1=='E' || s1=='I' || s1=='O'|| s1=='U')
    {
    cnt++;
    }
    if(cnt==0)
    printf("Consolant char=%c",s1);
    else
    printf("Vowels=%c",s1);
    
}
