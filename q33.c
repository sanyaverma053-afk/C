//Q.Write a C program to make a simple calculator using if–else.

#include <stdio.h>
int main()
{
    float a, b;
    char op;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if(op == '+')
    {
        printf("Result = %.2f", a + b);
    }
    else if(op == '-')
    {
        printf("Result = %.2f", a - b);
    }
    else if(op == '*')
    {
        printf("Result = %.2f", a * b);
    }
    else if(op == '/')
    {
        if(b != 0)
            printf("Result = %.2f", a / b);
        else
            printf("Division by zero not allowed");
    }
    else
    {
        printf("Invalid operator");
    }

    return 0;
}





