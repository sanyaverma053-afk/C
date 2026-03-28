
//Q.Check whether a number is Armstrong number.

#include<stdio.h>
int main()
{
    int n,s=0,digit,original;
    printf("enter a number");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        digit=n%10;
        s=s+(digit*digit*digit);
        n=n/10;
    }
    if(s==original)
        printf("armstrong number");
    else
        printf("not an armstrong number");
    return 0;
}
