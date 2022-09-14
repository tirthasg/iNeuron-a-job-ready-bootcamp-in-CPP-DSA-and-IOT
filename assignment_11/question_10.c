#include <stdio.h>

int sum_of_series(int N)
{
    if (N < 0)
        return 0;

    if (N == 0 || N == 1)
        return N;

    int sum = 1, term = 1;
    for (int i = 2; i <= N; i++) {
        term *= (i - 1);
        sum += term;
    }

    return sum;
}

int main(void)
{
    int N, sum;
    printf("Enter total count of terms in series: ");
    scanf("%d", &N);

    sum = sum_of_series(N);
    printf("Sum of %d terms of the series is %d\n", N, sum);

    return 0;
}