#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp_value = num;
    temp_value /= 10;
    temp_value *= 10;

    printf("%d is transformed to %d\n", num, temp_value);

    return 0;
}