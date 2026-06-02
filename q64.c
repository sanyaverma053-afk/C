//Q11.Print Pascal’s Triangle.
//pattern(n=5)
/*
1
11
121
1331
14641
*/

#include<stdio.h>
int main()
{
    int i,j,n;
    int num;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        num=1;
        for(j=0;j<=i;j++)
        {
            printf("%d",num);
            num=num*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}
