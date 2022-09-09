#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    int temp_value = N, reverse = 0, digit;
    while (temp_value != 0) {
        digit = temp_value % 10;
        reverse = reverse * 10 + digit;

        temp_value /= 10;
    }
    printf("Reverse of %d is %d\n", N, reverse);

    return 0;
}