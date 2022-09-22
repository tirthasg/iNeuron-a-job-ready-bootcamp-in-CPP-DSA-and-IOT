#include <stdio.h>

void print_naturals(int N)
{
    if (N <= 0)
        return;

    print_naturals(N - 1);
    printf("%d ", N);
}

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    print_naturals(N);

    return 0;
}