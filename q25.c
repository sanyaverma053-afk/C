
//Q.Write a C program to find the smallest of three numbers.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 1st number");
    scanf("%d",&a);
    printf("enter 2nd number");
    scanf("%d",&b);
    printf("enter 3rd number");
    scanf("%d",&c);
    if(a<b)
    {
        printf("a is smallest");
    }
    else if(b<c)
    {
        printf("b is smallest");
    }
    else
    {
        printf("c is smallest");
    }

    return 0;
}
