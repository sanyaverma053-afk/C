
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[100];
    int marks;
};

int main()
{
    struct Student s[5];
    int i,max=0;
    for(i=0;i<5;i++)
    {
        scanf("%s %d",s[i].name ,&s[i].marks);
    }
    for(i=1;i<5;i++)
    {
        if(s[i].marks > s[max].marks)
            max = i;
    }

    printf("Topper: %s\n", s[max].name);
    printf("Marks: %d\n", s[max].marks);

    return 0;
    
}
