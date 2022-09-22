#include <stdio.h>

void print_odd_naturals_reverse(int N)
{
    if (N <= 0)
        return;
        
    printf("%d ", 2 * N - 1);
    print_odd_naturals_reverse(N - 1);
}

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    print_odd_naturals_reverse(N);

    return 0;
}