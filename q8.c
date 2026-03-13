Q8.Write a C program to find the remainder of two numbers.

#include<stdio.h>
int main()
{
    int a,b,rem;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    rem=a%b;
    printf("remainder of two number%d",rem);
    return 0;
}
