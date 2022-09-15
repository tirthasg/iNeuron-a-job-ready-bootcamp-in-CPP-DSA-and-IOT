#include <stdio.h>

int main(void)
{
    int day, month, year;
    printf("Enter the date in DD/MM/YYYY: ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Day - %d, Month - %d, Year - %d\n", day, month, year);

    return 0;
}