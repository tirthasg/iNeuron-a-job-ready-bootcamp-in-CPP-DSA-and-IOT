#include <stdio.h>

int main(void)
{
    int year;
    printf("Enter value of year: ");
    scanf("%d", &year);

    int condition = (year % 4 == 0) && (year % 100 || year % 400 == 0);
    switch (condition) {
        case 0: printf("Year is ordinary\n"); break;
        case 1: printf("Year is a leap year\n");
    }

    return 0;
}