#include <stdio.h>

void print_even_naturals_reverse(int N)
{
    if (N <= 0)
        return;
        
    printf("%d ", 2 * N);
    print_even_naturals_reverse(N - 1);
}

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    print_even_naturals_reverse(N);

    return 0;
}