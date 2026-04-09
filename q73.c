//Q.Find average of array.

#include<stdio.h>
int main()
{
    int n,i,a[100],sum;
    float avg;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=(float)sum/n;

    printf("Sum = %d\n", sum);
    printf("Average = %f", avg);
    return 0;
}
