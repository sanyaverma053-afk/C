
//Q.Write a program to check whether a number is even or odd.


#include<stdio.h>
int main()
{
    int a;
    printf("enter  any number");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("positive");
    }
    else if(a%2!=0)
    {
        printf("negative");
    }
    return 0;
}
