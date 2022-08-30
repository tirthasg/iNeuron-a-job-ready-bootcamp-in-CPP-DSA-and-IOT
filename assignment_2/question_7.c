#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num) {
        int temp_value = num, position = 1, bit;
        while (temp_value != 0) {
            bit = temp_value & 1;
            if (bit) {
                printf("%d has first set bit at position %d from right\n",
                        num, position);
                break;
            }

            position++;
            temp_value >>= 1;
        }
    }
    else
        printf("%d doesn't have a set bit\n", num);

    return 0;
}