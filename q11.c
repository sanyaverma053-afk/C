//Q11.Write a program to convert days into years, weeks, and days.

#include <stdio.h>
int main()
{
    int days, years, weeks, remaining_days;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;

    weeks = days / 7;
    remaining_days = days % 7;

    printf("Years = %d\n", years);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d\n", remaining_days);

    return 0;
}
