#include <stdio.h>

int main(void)
{
    int marks1, marks2, marks3, marks4, marks5;
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d", &marks1, &marks2, &marks3, &marks4, &marks5);

    if (marks1 < 33 || 
        marks2 < 33 || 
        marks3 < 33 || 
        marks4 < 33 || 
        marks5 < 33)
        printf("Failed\n");
    else 
        printf("Pass\n");

    return 0;
}