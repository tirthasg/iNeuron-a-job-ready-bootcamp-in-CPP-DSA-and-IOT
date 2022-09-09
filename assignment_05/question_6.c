#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter count of iterations: ");
    scanf("%d", &N);

    printf("First %d even natural numbers: \n", N);
    for (int i = 1; i <= N; i++)
        printf("%d\n", 2 * i);

    return 0;
}