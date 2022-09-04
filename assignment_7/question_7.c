#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    int min = a <= b ? a : b;
    if (min <= 0)
        min = 2;
        
    int max = a <= b ? b : a;

    int primes[max + 1];
    for (int i = 2; i <= max; i++)
        primes[i] = 1;

    for (int i = 2; i * i <= max; i++)
        for (int j = i * i; j <= max; j += i)
            if (primes[j])
                primes[j] = 0;
    
    for (int i = min; i <= max; i++)
        if (primes[i])
            printf("%d ", i);
    printf("\n");

    return 0;
}