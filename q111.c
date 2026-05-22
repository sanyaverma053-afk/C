//Write a C program using pointers. If the number is divisible by 3,
//  print triple of the number, otherwise print half of the number.

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
    if(*(p+i)%3==0)
    {
        *(p+i)=*(p+i)*3;
        printf("%d\n",*(p+i));
    }
    else
    {
        *(p+i)=*(p+i)/2;
        printf("%d\n",*(p+i));
    }
    }
    free(p);
    return 0;
    
}
