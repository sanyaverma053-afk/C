
//WAP to compare 2 string  with using function.

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50];
    printf("enter string s1 and s2");
    scanf("%s %s",s1,s2);
    if(strcmp(s1,s2)==0)
    {
        printf("same");
    }
    else
    {
        printf("Different");
    }
    return 0;
}
