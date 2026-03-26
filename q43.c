
//Q.Check whether a number is palindrome or not (Example: 121
#include<stdio.h>
int main()
{
    int n,digit,rev=0,original;
    printf("enter a number");
    scanf("%d",&n);

    original=n;

    while(n!=0)
    {
        
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
        
    }
    if(original==rev)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
}
