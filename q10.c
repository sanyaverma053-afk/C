//Q10.Write a C program to swap two numbers using a temporary variable.


#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("enter swap number%d\n",a);
    printf("enter another swaped number %d",b);
    return 0;
}

