//Q.Write a program in C for a 2D array of size 3x3 and print the matrix.
#include<stdio.h>
int main()
{
    int i,j,a[3][3];
    printf("enter elements:\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }

    return 0;
}
