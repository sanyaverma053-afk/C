
//WAP to find the length of string without using function.

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,c;
    printf("enter string");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
    c++;
    }
    printf("length of string is%d",c);
    return 0;
}
