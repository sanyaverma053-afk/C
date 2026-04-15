//Q. Count frequency of element.

#include<stdio.h>
int main()
{
    int a[100],n,i,key,count=0;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to count frequency:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
        count++;
        }
    }
    printf("Frequency of %d = %d", key, count);
    return 0;
}
