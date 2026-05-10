//Q.Write a C program to find the greater of two numbers.

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter another number");
    scanf("%d",&b);
    if (a<b)
    {
        printf("b is greater than a");

    }
    else
    {
        printf("a is greater than b");
    }
    return 0;
}
