#include <stdio.h>

void print_squares_naturals(int N)
{
    if (N <= 0)
        return;
        
    print_squares_naturals(N - 1);
    printf("%d ", N * N);
}

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    print_squares_naturals(N);

    return 0;
}