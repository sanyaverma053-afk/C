//Q.Find sum of digits until single digit
//Example:
//987 → 9+8+7 = 24 → 2+4 = 6

#include<stdio.h>
int main()
{
    int n,sum,rem;
    printf("enter n:");
    scanf("%d",&n);
    while(n>=10)
    {
        sum=0;
        while(n>0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        n=sum;
    }
    printf("single digit=%d",n);
    return 0;
}
