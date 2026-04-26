Q. Write a C program to input a matrix of order m x n and print its saddle point. If there is no saddle 
point then print a message no saddle point.(Note: A saddle point in a matrix is an element that is 
simultaneously the minimum in its row and the maximum in its column.) */
/*
#include <stdio.h>
int main() 
{
    int m, n, i, j, k;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("Enter elements:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    int found = 0;
    for(i = 0; i < m; i++) 
    {
        int min = a[i][0];
        int col_index = 0;
    for(j = 1; j < n; j++) 
    {
            if(a[i][j] < min) 
            {
                min = a[i][j];
                col_index = j;
            }
        }

        int isSaddle = 1;
        for(k = 0; k < m; k++) 
        {
            if(a[k][col_index] > min) 
            {
                isSaddle = 0;
                break;
            }
        }

        if(isSaddle == 1) 
        {
            printf("Saddle Point = %d", min);
            found = 1;
            break;
        }
    }

    if(found == 0) 
    {
        printf("No Saddle Point");
    }
    return 0;
}
