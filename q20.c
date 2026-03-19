
//Q9.Write a C program to find the largest of three numbers.

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
    if(a>b)
    {
        printf("a is largerst");
    }
    else if(b>c)
    {
        printf("b is greatest");
    }
    else
    {
        printf("c is greatest");
    }
    return 0;
}
