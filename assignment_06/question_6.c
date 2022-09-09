#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter value of N: ", N);
    scanf("%d", &N);

    int factorial = 1;
    for (int i = 2; i <= N; i++)
        factorial *= i;
    printf("Factorial of %d is %d\n", N, factorial);

    return 0;
}