
//Write a C program to read a sentence from the user and print the acronym formed by taking the first letter of each word.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    printf("enter the sentence :");
    fgets(str, sizeof(str), stdin);

    printf("acronym\n");

    if (str[0] != ' ')
        printf("%c", str[0]);

    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i - 1] == ' ' && str[i] != ' ')
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}
