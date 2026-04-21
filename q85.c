//Q.Write a program in C to find the sum of the right diagonals of a matrix.
#include<stdio.h>
int main()
{
    int n,m,i,j,a[50][50],sum=0;
    printf("enter number of rows and columns\n");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            sum=sum+a[i][j];
        
        }
        printf("sum of right diagonal%d\n",sum);
    }
    return 0;
}
