/*
Q3.Write a C program using structure student with members name, rollno, and marks. Take input from the user. 
If marks are greater than 90, print the student name.
*/

#include<stdio.h>

struct student
{
    char name[20];
    int rollno;
    int marks;
};

int main()
{
    struct student s;

    printf("enter name ");
    scanf("%s",s.name);

    printf("enter roll number ");
    scanf("%d",&s.rollno);

    printf("enter marks ");
    scanf("%d",&s.marks);

    if(s.marks > 90)
    {
        printf("student name is %s",s.name);
    }

    return 0;
}
