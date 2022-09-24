#include <stdio.h>

int sum_odd_naturals(int N)
{
    if (N <= 0)
        return 0;

    return sum_odd_naturals(N - 1) + 2 * N - 1;
}

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    int result = sum_odd_naturals(N);
    printf("%d\n", result);

    return 0;
}