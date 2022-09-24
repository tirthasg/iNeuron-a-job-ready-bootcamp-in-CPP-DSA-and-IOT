#include <stdio.h>

int factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;

    return num * factorial(num - 1);
}

int main(void)
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int result = factorial(num);
    printf("%d\n", result);

    return 0;
}