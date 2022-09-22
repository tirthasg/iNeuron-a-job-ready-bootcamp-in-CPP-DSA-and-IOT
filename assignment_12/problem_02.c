#include <stdio.h>

void print_naturals_reverse(int N)
{
    if (N <= 0)
        return;
        
    printf("%d ", N);
    print_naturals_reverse(N - 1);
}

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    print_naturals_reverse(N);

    return 0;
}