#include <stdio.h>

int factorial(int N)
{
    if (N == 0 || N == 1)
        return 1;
    
    int result = 1;
    for (int i = 2; i <= N; i++)
        result *= i;

    return result;
}

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    int result = factorial(N);
    printf("%d\n", result);

    return 0;
}