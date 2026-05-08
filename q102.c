/*
Q2.Write a C program using structure coffee with members name, quantity, and price.
Take input from the user. If the coffee name is black and quantity is 150 ml, print the price of that coffee.
*/
#include<stdio.h>
#include<string.h>

struct coffee
{
    char name[20];
    int quantity;
    int price;
};

int main()
{
    struct coffee c;

    printf("enter coffee name ");
    scanf("%s",c.name);

    printf("enter quantity ");
    scanf("%d",&c.quantity);

    printf("enter price ");
    scanf("%d",&c.price);

    if(strcmp(c.name,"black")==0 && c.quantity==150)
    {
        printf("price of that coffee is %d",c.price);
    }

    return 0;
}
