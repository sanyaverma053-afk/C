
//2. Count Even and Odd

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, even=0, odd=0;
    int *p;

    scanf("%d",&n);
    p= (int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
        
    }
    for(i=0;i<n;i++)
    {
    if(*(p+i)%2==0)
    {
        even++;
    }
    else
    {
    odd++;
    }
    }
    printf("Even = %d Odd = %d", even, odd);

    free(p);
    return 0;
}
