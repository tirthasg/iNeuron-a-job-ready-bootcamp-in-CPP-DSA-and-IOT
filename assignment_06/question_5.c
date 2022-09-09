#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);
    
    int sum = 0;
    for (int i = 1; i <= N; i++)
        sum += i * i * i;
    printf("Sum of cubes of %d even natural numbers is %d\n", N, sum);

    return 0;
}