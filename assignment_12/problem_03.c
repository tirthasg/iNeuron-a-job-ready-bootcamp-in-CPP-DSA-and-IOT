#include <stdio.h>

void print_odd_naturals(int N)
{
    if (N <= 0)
        return;

    print_odd_naturals(N - 1);
    printf("%d ", 2 * N - 1);
}

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    print_odd_naturals(N);

    return 0;
}