
//Q.Write a program to check whether a character is uppercase, lowercase, or digit.

#include<stdio.h>
int main()
{
    char ch;
    printf("enter character ");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase letter");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase letter");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special character");
    }
    return 0;
}
