
//1. Write a program to create and write into a file

#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("file1.txt", "w");  // create & open in write mode

    if(fp == NULL) {
        printf("File not created");
        return 0;
    }

    fprintf(fp, "Hello World");

    fclose(fp);

    printf("Data written successfully");
    return 0;
}
