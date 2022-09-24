#include <stdio.h>

int sum_even_naturals(int N)
{
    if (N <= 0)
        return 0;
        
    return sum_even_naturals(N - 1) + 2 * N;
}

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    int result = sum_even_naturals(N);
    printf("%d\n", result);

    return 0;
}