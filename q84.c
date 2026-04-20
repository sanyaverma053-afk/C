
//Q.Write a program in C for the subtraction of two matrices.

#include<stdio.h>
int main()
{
    int n,i,j,a[50][50],b[50][50],c[50][50];
    printf("enter size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("first matrix\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            scanf("%d\t",a[i][j]);
        }
    }
    printf("second matrix\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            scanf("%d\t",b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    
    printf("\nThe subtaction of two matrix is : \n");
    for (i = 0; i < n; i++) 
    {
        printf("\n");
        
        for (j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j]);
        }
    }
    return 0;
}
