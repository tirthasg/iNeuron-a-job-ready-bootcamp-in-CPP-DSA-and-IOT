#include <stdio.h>

int main(void)
{
    int num, digit;
    printf("Enter an integer and a digit: ");
    scanf("%d%d", &num, &digit);

    num *= 10;
    num += digit;
    printf("Value of integer post transformation is %d\n", num);

    return 0;
}