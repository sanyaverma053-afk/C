
//Q.Write a program in C for adding two matrices of the same size.

#include<stdio.h>
int main()
{
    int i,j,n,a[50][50],b[50][50],c[50][50];
    printf("enter matrix  size\n:");
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
    printf("\nThe First matrix is :\n");
    for (i = 0; i < n; i++) 
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
    }

    printf("\nThe Second matrix is :\n");
    for (i = 0; i < n; i++) 
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%d\t",b[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nThe Addition of two matrix is : \n");
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
