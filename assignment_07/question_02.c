#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter the term number: ");
    scanf("%d", &N);

    printf("%d terms of Fibonacci sequence: \n", N);
    int first = 0, second = 1, next;
    for (int i = 1; i <= N; i++) {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}