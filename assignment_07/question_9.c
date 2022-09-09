#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    num = abs(num);

    int temp_value = num, total_digits = 0;
    while (temp_value != 0) {
        total_digits++;
        temp_value /= 10;
    }

    int sum = 0, base, exponent, result;
    temp_value = num;
    while (temp_value != 0) {
        base = temp_value % 10;
        exponent = total_digits;
        result = 1;
        while (exponent != 0) {
            if (exponent & 1)
                result *= base;
            
            base *= base;
            exponent >>= 1;
        }

        sum += result;
        temp_value /= 10;
    }

    if (sum == num)
        printf("%d is an Amstrong number\n", num);
    else 
        printf("%d is not an Amstrong number\n", num);

    return 0;
}