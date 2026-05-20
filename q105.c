/*
Q5.Write a C program using structure employee with members name, salary, and age. Take input from the user. 
If age is above 30, print the employee salary.
*/

#include<stdio.h>

struct employee
{
    char name[20];
    int salary;
    int age;
};

int main()
{
    struct employee e;

    printf("enter name ");
    scanf("%s",e.name);

    printf("enter salary ");
    scanf("%d",&e.salary);

    printf("enter age ");
    scanf("%d",&e.age);

    if(e.age>30)
    {
        printf("employee salary is %d",e.salary);
    }

    return 0;
}
