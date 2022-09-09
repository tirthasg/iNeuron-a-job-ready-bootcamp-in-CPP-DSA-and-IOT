#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    printf("Table of %d: \n", N);
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", N, i, N * i);

    return 0;
}