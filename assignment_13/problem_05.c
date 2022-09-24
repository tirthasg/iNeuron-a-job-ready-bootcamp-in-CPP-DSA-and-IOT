#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int num)
{
    if (num <= 0)
        return 0;

    return sum_of_digits(num / 10) + num % 10;
}

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int result = sum_of_digits(abs(num));
    printf("%d\n", result);

    return 0;
}