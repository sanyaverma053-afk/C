//Q12.Find sum of factorial series
//1! + 2! + 3! + ... + n!

#include<stdio.h>
int main()
{
    int n,i,j,fact,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
    }
    printf("sum=%d",sum);
    return 0;
}
