#include <stdio.h>

void print_naturals(int N)
{
    for (int i = 1; i <= N; i++)
        printf("%d ", i);
    printf("\n");
}

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    print_naturals(N);

    return 0;
}