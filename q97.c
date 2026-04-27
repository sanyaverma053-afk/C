Q  . Write a C program to store a predefined email ID using static initialization. Accept an email ID 
from the user and compare both using pointers. The comparison must be case insensitive. Print 
“Valid Email” or “Invalid Email”. 

#include <stdio.h>
int main()
{
    char email1[] = "test@gmail.com";
    char email2[100];
    printf("Enter email: ");
    scanf("%s", email2);
    char *p1 = email1;
    char *p2 = email2;	
    while (*p1 != '\0' && *p2 != '\0')
    {
        char ch1 = *p1;
        char ch2 = *p2;
        if (ch1 >= 'A' && ch1 <= 'Z')
            ch1 = ch1 + 32;
        if (ch2 >= 'A' && ch2 <= 'Z')
            ch2 = ch2 + 32;
        if (ch1 != ch2)
        {
            printf("Invalid Email");
            return 0;
        }
        p1++;
        p2++;
    }
    if (*p1 == '\0' && *p2 == '\0')
        printf("Valid Email");
    else
        printf("Invalid Email");
    return 0;
}
