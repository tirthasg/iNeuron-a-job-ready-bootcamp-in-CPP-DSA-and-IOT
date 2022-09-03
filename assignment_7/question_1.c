#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter the term number: ");
    scanf("%d", &N);

    if (N == 0 || N == 1)
        printf("%d-th term of Fibonacci sequence is %d\n", N, N);
    else {
        int first = 0, second = 1, next;
        for (int i = 2; i <= N; i++) {
            next = first + second;
            
            first = second;
            second = next;
        }
        printf("%d-th term of Fibonacci sequence is %d\n", N, next);
    }

    return 0;
}