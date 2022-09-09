#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter value of integer: ");
    scanf("%d", &N);

    if (N <= 1)
        printf("%d is not prime\n", N);
    else if (N == 2 || N == 3)
        printf("%d is prime\n", N);
    else if (N % 2 == 0 || N % 3 == 0)
        printf("%d is not prime\n", N);
    else {
        int is_prime = 1;
        for (int d = 5; d * d <= N; d += 6)
            if (N % d == 0 || N % (d + 2) == 0) {
                printf("%d is not prime\n", N);
                is_prime = 0;
                break;
            }
        
        if (is_prime)
            printf("%d is prime\n", N);
    }

    return 0;
}