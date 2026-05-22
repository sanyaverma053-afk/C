//Q1.dma question if any integer is 1 digit do double and 
// if it is double digit do half of that using pointers

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    int *p;
    printf("enter number ");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {
    if(*(p+i)>=0 && *(p+i)<=9)
    {
        *(p+i)=*(p+i)*2;
        printf("double value is %d\n",*(p+i));
    }

    else if(*(p+i)>=10 && *(p+i)<=99)
    {
        *(p+i)=*(p+i)/2;
        printf("half value is %d\n",*(p+i));
    }
    }
    free(p);
    return 0;
   
}

