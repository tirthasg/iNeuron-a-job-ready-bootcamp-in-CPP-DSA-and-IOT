#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter the term number: ");
    scanf("%d", &N);

    printf("%d terms of Fibonacci sequence: \n", N);

    N--;
    if (N == 0)
        printf("%d\n", N);
    else if (N == 1)
        printf("%d %d\n", N - 1, N);
    else {
        int first = 0, second = 1, next;
        printf("%d %d ", first, second);

        for (int i = 2; i <= N; i++) {
            next = first + second;
            printf("%d ", next);

            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;
}