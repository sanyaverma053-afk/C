
//Q.Print the multiplication table of a number entered by the user.
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
    
    return 0;
}
