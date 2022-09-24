#include <stdio.h>

int sum_natural_squares(int N)
{
    if (N <= 0)
        return 0;

    return sum_natural_squares(N - 1) + N * N;
}

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    int result = sum_natural_squares(N);
    printf("%d\n", result);

    return 0;
}