#include <stdio.h>

void print_primes(int a, int b)
{
    int primes[b + 1];
    for (int i = 2; i <= b; i++)
        primes[i] = 1;
    
    for (int i = 2; i * i <= b; i++)
        if (primes[i])
            for (int j = i * i; j <= b; j += i)
                primes[j] = 0;
    
    if (a <= 2)
        a = 2;

    for (int i = a; i <= b; i++)
        if (primes[i])
            printf("%d ", i);
    printf("\n");
}

int main(void)
{
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d%d", &num1, &num2);

    print_primes(num1, num2);

    return 0;
}