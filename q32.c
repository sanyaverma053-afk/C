
//Q21.Write a program to find the roots of a quadratic equation.
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, root1, root2;

    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b*b - 4*a*c;

    if(D > 0)
    {
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        printf("Roots are real and different\n");
        printf("Root1 = %f\n", root1);
        printf("Root2 = %f", root2);
    }
    else if(D == 0)
    {
        root1 = -b / (2*a);
        printf("Roots are real and equal\n");
        printf("Root = %f", root1);
    }
    else
    {
        printf("Roots are imaginary");
    }

    return 0;
}
