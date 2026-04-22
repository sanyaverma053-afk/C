//WAP to concatenate 2 strings without using function.

#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int i, j;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    for (i = 0; str1[i] != '\0'; i++)
    for (j = 0; str2[j] != '\0'; j++, i++) 
    {
        str[i] = str2[j];
    }
    str[i] = '\0';
    printf("Concatenated string: %s",str1);
    return 0;
}
