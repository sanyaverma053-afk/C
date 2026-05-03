/*
//Q2.A record contains name of cricketer his age number of test matches
that he has played and the average runs that he has scored in each test 
match create an array of structure to hold records of 20 such cricketer 
*/

#include <stdio.h>
struct Cricketer {
    char name[50];
    int age;
    int test_matches;
    float avg_runs;
};
int main() {
    struct Cricketer players[20];
    int i;
    for(i = 0; i < 20; i++) {
        printf("\nEnter details of cricketer %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", players[i].name);   // reads full name
        printf("Age: ");
        scanf("%d", &players[i].age);
        printf("Number of Test Matches: ");
        scanf("%d", &players[i].test_matches);
        printf("Average Runs: ");
        scanf("%f", &players[i].avg_runs);
    }
    printf("\n--- Cricketer Records ---\n");
    for(i = 0; i < 20; i++) {
        printf("\nCricketer %d:\n", i + 1);
        printf("Name: %s\n", players[i].name);
        printf("Age: %d\n", players[i].age);
        printf("Test Matches: %d\n", players[i].test_matches);
        printf("Average Runs: %.2f\n", players[i].avg_runs);
    }
    return 0;
}
