
//Q.Write a C program to check whether a number is positive or negative.

#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("positive");

    }
    else if (a<0)
    {
        printf("negative");
    }

    return 0;
}
