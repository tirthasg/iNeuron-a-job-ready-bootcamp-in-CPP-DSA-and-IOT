#include <stdio.h>

void print_even_naturals(int N)
{
    if (N <= 0)
        return;

    print_even_naturals(N - 1);
    printf("%d ", 2 * N);
}

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    print_even_naturals(N);

    return 0;
}