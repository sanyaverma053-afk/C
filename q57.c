
//Q.Print pyramid.
/*
    *
   ***
  *****
 *******
*********

*/

#include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 5; i++)   // rows
    {
        for(j = 1; j <= 5-i; j++)   // spaces
        {
            printf(" ");
        }
        for(j = 1; j <= (2*i-1); j++)   // stars
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
