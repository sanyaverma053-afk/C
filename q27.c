//Q16.Write a C program to check whether a triangle is valid using angles.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three angles");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180 && a>0 &&b>0 &&c>0)
    {
        printf("triangle");
    }
    else
    {
        printf("not a triangle");
    }
    return 0;
}
