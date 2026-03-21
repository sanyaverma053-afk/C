//Q.Write a C program to check whether a number is divisible by both 3 and 7

#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a%3==0&&a%7==0)
    {
        printf("divisible by 3 and 7");
    }
    else
    {
        printf("not divsible by 3 and 7");
    }
    return 0;
}
