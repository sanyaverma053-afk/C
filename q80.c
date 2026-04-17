//Q.Find missing number.

#include<stdio.h>

int main()
{
    int a[100], n, i;
    int sum = 0, total, missing;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }

    total = (n+1)*(n+2)/2;

    missing = total - sum;

    printf("Missing number = %d", missing);

    return 0;
}

