
//Q.Write a C program to take n elements in an array and print them.
#include<stdio.h>
int main()
{
    int n,i,a[100];
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
