#include <stdio.h>

int main(void)
{
    int hours, minutes;
    printf("Enter time in HH:MM format: ");
    scanf("%d:%d", &hours, &minutes);

    printf("%d hours and %d minutes", hours, minutes);

    return 0;
}