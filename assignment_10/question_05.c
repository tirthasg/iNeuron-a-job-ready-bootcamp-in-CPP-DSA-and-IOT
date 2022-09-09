#include <stdio.h>

void print_odd_naturals(int N)
{
    for (int i = 1; i <= N; i++)
        printf("%d ", 2 * i - 1);
    printf("\n");
}

int main(void) 
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    print_odd_naturals(N);

    return 0;
}