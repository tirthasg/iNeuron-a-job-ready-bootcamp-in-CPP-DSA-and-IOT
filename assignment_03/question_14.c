#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 7 == 0 || num % 3 == 0)
        printf("%d is divisble by 7 or 3\n", num);
    else 
        printf("%d is not divisible by either 7 or 3\n", num);

    return 0;
}