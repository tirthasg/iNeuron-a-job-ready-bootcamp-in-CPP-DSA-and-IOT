#include <stdio.h>

int main(void)
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if ((year % 4 == 0) && (year % 100 || year % 400 == 0))
        printf("Leap year\n");
    else 
        printf("Ordinary year\n");

    return 0;
}