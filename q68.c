//Q. Find sum of elements of an array.
#include<stdio.h>
int main()
{
    int n,i,a[100],sum=0;
    printf("enter size:");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements are:\n");
    for(i=0;i<n;i++)
    {
    sum=sum+a[i];
    printf("sum = %d ",sum);
    }
    return 0;
}
