
//Q.Write a C program to calculate electricity bill using slab rates.

#include <stdio.h>
int main()
{
    int units;
    float bill;
    printf("Enter number of units: ");
    scanf("%d", &units);
    if(units <= 100)
    {
        bill = units * 5;
    }
    else if(units <= 200)
    {
        bill = units * 7;
    }
    else
      {
        bill = units * 10;
    }

    printf("Electricity Bill = %.2f", bill);

    return 0;
}
