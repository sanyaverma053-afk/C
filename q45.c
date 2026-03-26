
//Q.Check whether a number is prime or not.

#include<stdio.h>
int main()
{
    int n,i,g=1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
        g=0;
        break;
        }
    }
    if(g==1&&n>1)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}
