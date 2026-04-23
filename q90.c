//WAP to copy 1 string to another string with using function.

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    printf("enter string:");
    scanf("%s",s1);
    strcpy(s2,s1);
    printf("copy string%s",s2);
    return 0;
}
