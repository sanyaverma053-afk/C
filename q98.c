Q. Write a C program to input 'n' integers using dynamic memory allocation. Insert a new element at 
a position specified by the user and display the updated array.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the no. of elements of an array: ");
    scanf("%d", &n);
    int *p;
    p = (int *)malloc(n * sizeof(int));
    printf("ENTER THE ELEMENTS OF AN ARRAY:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    int ele, pos;
    printf("ENTER THE POSITION (0 to %d): ", n);
    scanf("%d", &pos);
    printf("ENTER THE ELEMENT YOU WANT TO INSERT: ");
    scanf("%d", &ele);
    p = (int *)realloc(p, (n + 1) * sizeof(int));
    for(int i = n; i > pos; i--)
    {
        *(p + i) = *(p + i - 1);
    }
    printf("MODIFIED ARRAY:\n");
    for(int i = 0; i < n + 1; i++)
    {
        printf("%d ", *(p + i));
    }
    free(p);
    return 0;
}
