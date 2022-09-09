#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);
    
    int sum = 0;
    for (int i = 1; i <= N; i++)
        sum += i * i;
    printf("Sum of squares of %d even natural numbers is %d\n", N, sum);

    return 0;
}