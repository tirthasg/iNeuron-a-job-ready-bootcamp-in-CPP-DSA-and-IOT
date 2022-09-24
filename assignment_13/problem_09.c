#include <stdio.h>

int count_digits(int num)
{
    if (num == 0)
        return 0;

    return count_digits(num / 10) + 1;
}

int main(void)
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int result = count_digits(num);
    printf("%d\n", result);

    return 0;
}