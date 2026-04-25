
//WAP to compare 2 string  without  using function.

#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int i,flag=0;
    printf("enter first sting");
    scanf("%s",s1);
    printf("enter another string");
    scanf("%s",s2);
    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
    return 0;
}
