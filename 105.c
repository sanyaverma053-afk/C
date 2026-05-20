/*
Q4.Write a C program using structure mobile with members brand, ram, and price. 
Take input from the user. If RAM is 8 GB, print the mobile price.
*/

#include<stdio.h>

struct mobile
{
    char brand[20];
    int ram;
    int price;
};

int main()
{
    struct mobile m;

    printf("enter brand ");
    scanf("%s",m.brand);

    printf("enter ram ");
    scanf("%d",&m.ram);

    printf("enter price ");
    scanf("%d",&m.price);

    if(m.ram==8)
    {
        printf("mobile price is %d",m.price);
    }

    return 0;
}
