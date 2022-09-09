#include <stdio.h>

int main(void)
{
    int month;
    printf("Enter value of month: ");
    scanf("%d", &month);

    int days;
    switch (month)
    {
        case 1: days = 31; break;
        case 2: days = 28; break;
        case 3: days = 31; break;
        case 4: days = 30; break;
        case 5: days = 31; break;
        case 6: days = 30; break;
        case 7: days = 31; break;
        case 8: days = 31; break;
        case 9: days = 30; break;
        case 10: days = 31; break;
        case 11: days = 30; break;
        case 12: days = 31; break;
        default: days = 0;
    }

    if (days)
        printf("Month-%d has %d days\n", month, days);
    else 
        printf("Invalid month\n");

    return 0;
}