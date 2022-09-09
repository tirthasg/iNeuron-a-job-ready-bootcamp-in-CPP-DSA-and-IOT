#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter count of iterations: ");
    scanf("%d", &N);

    printf("First %d even natural numbers in reverse: \n", N);
    for (int i = 2 * N; i > 0; i -= 2)
        printf("%d\n", i);

    return 0;
}