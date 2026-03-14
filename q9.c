
//Q9.Write a C program to convert Celsius to Fahrenheit.


#include<stdio.h>
int main()
{
    float Celsius,Fahrenheit;
    printf("enter  temperature in celsius ");
    scanf("%f",&Celsius);
    Fahrenheit=(9.0/5.0) * Celsius + 32;
    printf("celsius to fahrenheit%f",Fahrenheit);
    return 0;
}
