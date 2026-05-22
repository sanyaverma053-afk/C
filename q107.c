/*
Write a C program using structure pizza with members type, size, and price. 
Take input from the user. If pizza size is medium, print the pizza price.
*/

#include<stdio.h>

struct pizza
{
    char type[20];
    char size[20];
    int price;
};

int main()
{
    struct pizza p;

    printf("enter type ");
    scanf("%s",p.type);

    printf("enter size ");
    scanf("%s",p.size);

    printf("enter price ");
    scanf("%d",&p.price);

    if(strcmp(p.size,"medium")==0)
    {
        printf("pizza price is %d",p.price);
    }

    return 0;
}
