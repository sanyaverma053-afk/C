//wap to reverse  a string without using function.

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],temp;
    int i,j,l;
    gets(a);
    l=strlen(a);
    for(i=0,j=l-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("reverse string%s",a);
    return 0;
}
