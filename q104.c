/*
Q3.Write a C program using structure book with members title, pages, and price. 
Take input from the user. If pages are 200, print the book price.
*/

#include<stdio.h>

struct book
{
    char title[20];
    int pages;
    int price;
};

int main()
{
    struct book b;

    printf("enter title ");
    scanf("%s",b.title);

    printf("enter pages ");
    scanf("%d",&b.pages);

    printf("enter price ");
    scanf("%d",&b.price);

    if(b.pages==200)
    {
        printf("book price is %d",b.price);
    }

    return 0;
}
