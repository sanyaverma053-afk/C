
//Write a C program to create an array using dynamic memory allocation, take n elements from the user, and display their sum and average.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,sum=0;
    float avg;
    int *p;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if (p == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        sum=sum+p[i];
    }
    avg=(float)sum/n;
    printf("sum of all numbers %d\n",sum);
    printf("average of all number %f\n",avg);
    free(p);
    return 0;

}
