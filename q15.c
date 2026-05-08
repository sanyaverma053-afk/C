
//Q4.Write a program to check whether two numbers are equal or not.

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    if(a==b)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }
    return 0;
}
