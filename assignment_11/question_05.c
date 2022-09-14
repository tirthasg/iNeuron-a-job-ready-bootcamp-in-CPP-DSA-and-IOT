#include <stdio.h>

int is_prime(int N)
{
    if (N <= 1)
        return 0;

    if (N == 2 || N == 3)
        return 1;

    if (N % 2 == 0 || N % 3 == 0)
        return 0;

    for (int d = 5; d * d <= N; d += 6)
        if (N % d == 0 || N % (d + 2) == 0)
            return 0;
    
    return 1;
}

void print_primes(int N)
{
    if (N <= 0)
        return;

    int count = 1, num = 2;
    while (count <= N) {
        if (is_prime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
}

int main(void)
{
    int N;
    printf("Enter a positive integer: ");
    scanf("%d", &N);

    print_primes(N);

    return 0;
}