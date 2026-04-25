
//wap to check whether a input string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i,l,flag=0;
    printf("enter string");
    scanf("%s",s);
    l=strlen(s);
    for (i = 0; i < l / 2; i++)
    {
        if (s[i] != s[l - i - 1]) 
        {
             flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
*/

