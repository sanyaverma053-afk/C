//Write a C program using pointers. If the number 
// is a single digit, add 10 to it, otherwise subtract 10 from it.

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
    if(*(p+i)>=0&&*(p+i)<=9)
    {
        *(p+i)=*(p+i)+10;
        printf("%d\n",*(p+i));
    }
    else
    {
        *(p+i)=*(p+i)-10;
        printf("%d\n",*(p+i));
    }
    }
    free(p);
    return 0;
}
