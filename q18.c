//Q.Write a C program to check whether a person is eligible to vote.

#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("eligible to vote");
    }
    else
    {
        printf("not eligible to vote");
    }
    return 0;
}
