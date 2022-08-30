#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d%d", &num1, &num2);

    int temp_value = num1;
    num1 = num2;
    num2 = temp_value;

    printf("Values of integers after swapping: %d %d\n", num1, num2);

    return 0;
}