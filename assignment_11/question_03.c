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

int main(void)
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("%d is ", num);
    is_prime(num) ? printf("a prime number") : printf("an ordinary number");
    printf("\n");

    return 0;
}