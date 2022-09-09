#include <stdio.h>

int combination(int N, int R)
{
    if (N < R)
        return 0;

    if (R == 0 || R == N)
        return 1;
    
    if (R == 1 || R == N - 1)
        return N;
    
    if (R < N - R)
        R = N - R;
    
    int result = 1;
    for (int i = 1; i <= R; i++)
        result = result * (N - i + 1) / i;
    
    return result;
}

int main(void)
{
    int N, R;
    printf("Enter values of N and R: ");
    scanf("%d%d", &N, &R);

    int result = combination(N, R);
    printf("N Choose R = %d\n", result);

    return 0;
}