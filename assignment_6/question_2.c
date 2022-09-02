#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);
    
    int sum = 0;
    for (int i = 1; i <= N; i++)
        sum += 2 * i;
    printf("Sum of %d even natural numbers is %d\n", N, sum);

    return 0;
}