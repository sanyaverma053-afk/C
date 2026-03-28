
//Q.Find largest digit in a number.
#include<stdio.h>
int main()
{
    int n, rem, largest = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0)
    { 
        rem = n % 10;   
        if(rem > largest)
        {
            largest = rem;
        }
        n = n / 10;     
    }
    printf("Largest digit = %d", largest);
    return 0;
}
