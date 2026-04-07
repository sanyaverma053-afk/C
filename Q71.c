//Q.Count even and odd numbers in array.
#include<stdio.h>
int main()
{
    int n,i,a[100],even=0,odd=0;
    printf("enter size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if (a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("even=%d",even);
    printf("odd=%d",odd);
    return 0;
}
