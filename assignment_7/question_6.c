#include <stdio.h>

int main(void)
{
    int primes[101];
    for (int i = 2; i <= 100; i++)
        primes[i] = 1;

    for (int i = 2; i * i <= 100; i++)
        if (primes[i])
            for (int j = i * i; j <= 100; j += i)
                primes[j] = 0;
    
    for (int i = 2; i <= 100; i++)
        if (primes[i])
            printf("%d ", i);
    printf("\n");

    return 0;
}