#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter count of iterations: ");
    scanf("%d", &N);

    printf("First %d natural numbers in reverse order: \n", N);
    for (int i = N; i > 0; i--)
        printf("%d\n", i);

    return 0;
}