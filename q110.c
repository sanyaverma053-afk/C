//Q3.Write a C program using pointers. 
// If the number is greater than 100, subtract 50 from it, otherwise add 50.

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
    if(*(p+i)>100)
    {
        *(p+i)=*(p+i)-50;
        printf("%d\n",*(p+i));
    }
    else
    {
        *(p+i)=*(p+i)+50;
        printf("%d\n",*(p+i));
    }
    }
    free(p);
    return 0;
}
