
//Q.Reverse a number (Example: 123 → 321).

#include<stdio.h>
int main()
{
    int n,digit ,rev=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    printf("reversed number=%d",rev);
    return 0;
}
