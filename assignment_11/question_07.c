#include <stdio.h>

void print_fibonacci(int N)
{
    if (N <= 0)
        return;

    int first = 0, second = 1, next;
    for (int i = 1; i <= N; i++) {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main(void)
{
    int N;
    printf("Enter a positive integer: ");
    scanf("%d", &N);

    print_fibonacci(N);

    return 0;
}