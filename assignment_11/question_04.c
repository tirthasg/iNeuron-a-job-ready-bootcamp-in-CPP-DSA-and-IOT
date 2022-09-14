#include <stdio.h>

int is_prime(int N)
{
    if (N <= 0)
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

    while (!is_prime(num))
        num++;
    
    printf("The next prime number (including itself) is %d\n", num);

    return 0;
}