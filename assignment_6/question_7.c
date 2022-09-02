#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    printf("Enter value of integer: ");
    scanf("%d", &N);

    N = abs(N);
    
    int total_digits;
    if (N) {
        int temp_value = N;
        total_digits = 0;
        while (temp_value != 0) {
            total_digits++;
            temp_value /= 10;
        }
    }
    else 
        total_digits = 1;
    printf("Total digits in %d is %d\n", N, total_digits);

    return 0;
}