/*
Q1.Create a structure type person with name salary and age as its 
attributes declare and initialize two variables for this print the name
of first person and age of the other.
*/
#include<stdio.h>
#include<string.h>
struct Person {
    char name[50];
    float salary;
    int age;
}P1,P2;

int main()
{
strcpy(P1.name,"Sameer");
P1.salary=150000;
P1.age=30;

strcpy(P2.name,"samaya");
P2.salary=200000;
P2.age=23;

printf("%s\n",P1.name);
printf("%f\n",P2.salary);
printf("%d\n",P1.age);
return 0;
}
