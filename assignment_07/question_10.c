#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for (int num = 0; num <= 1000; num++) {
        int temp_value = num, total_digits = 0;
        while (temp_value != 0) {
            total_digits++;
            temp_value /= 10;
        }

        temp_value = num;
        int sum = 0;
        while (temp_value != 0) {
            int base = temp_value % 10, exponent = total_digits, result = 1;
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
            printf("%d ", num);
    }
    printf("\n");

    return 0;
}