#include <stdio.h>

void print_fibonacci(int N)
{
    if (N <= 0)
        return;

    if (N == 1) {
        printf("%d\n", 0);
        return;
    }

    if (N == 2) {
        printf("%d %d\n", 0, 1);
        return;
    }

    printf("%d %d ", 0, 1);
    int first = 0, second = 1, next, count = 3;
    while (count <= N) {
        next = first + second;
        printf("%d ", next);

        first = second;
        second = next;
        count++;
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