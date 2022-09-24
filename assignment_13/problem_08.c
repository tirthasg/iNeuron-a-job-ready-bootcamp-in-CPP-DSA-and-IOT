#include <stdio.h>

int fibonacci(int N)
{
    if (N == 0 || N == 1)
        return N;

    return fibonacci(N - 1) + fibonacci(N - 2);
}

void print_fibonacci(int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", fibonacci(i));
}

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    print_fibonacci(N);

    return 0;
}