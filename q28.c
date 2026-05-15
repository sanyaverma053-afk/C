//Q17.Write a program to determine the type of triangle (equilateral, isosceles, scalene)

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three side");
    scanf("%d%d%d",&a,&b,&c);
    if(a=b=c)
    {
        printf("equilateral triangle");
    }
    else if(a==b || b==c ||a==c)
    {
        printf("isosceles triangle");
    }
    else if(a!=b && b!=c && c!=a)
    {
        printf("scalene triangle");
    }
    else
      {
        printf("not valid");
    }
    return 0;
}
