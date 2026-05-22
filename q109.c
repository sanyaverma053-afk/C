//Q2.Write a C program using pointers. 
// If the number is even, multiply it by 5, otherwise divide it by 2.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    int* p;
    printf("enter number");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {
    if(*(p+i)%2==0)
    {
        *(p+i)=*(p+i)*5;
        printf("multiply by 5 %d\n",*(p+i));
    }
    else if (*(p+i)%2!=0)
    {
        *(p+i)=*(p+i)/2;
        printf("Divide by 2 %d\n",*(p+i));
    }
    }
    free(p);   
    return 0;
}
