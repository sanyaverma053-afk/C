//QWAP to insert an element at a particular position.
#include <stdio.h>
int main()
{
    int a[50],n,i,pos,ele;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter position and element: ");
    scanf("%d%d",&pos,&ele);
    for(i=n;i>=pos;i--)
    {
    a[i]=a[i-1];
    }
    a[pos-1]=ele;
    n++;
    printf("Array after insertion:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
*/
