#include <stdio.h>

int sum_naturals(int N)
{
    if (N <= 0)
        return 0;
        
    return sum_naturals(N - 1) + N;
}

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    int result = sum_naturals(N);
    printf("%d\n", result);

    return 0;
}