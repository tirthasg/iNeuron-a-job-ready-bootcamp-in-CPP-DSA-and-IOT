#include <stdio.h>

int permutation(int N, int R)
{
    if (N < R)
        return 0;

    if (R == 0)
        return 1;
    
    if (R == 1)
        return N;
    
    int result = 1;
    for (int i = 1; i <= R; i++)
        result = result * (N - i + 1);
    
    return result;
}

int main(void)
{
    int N, R;
    printf("Enter values of N and R: ");
    scanf("%d%d", &N, &R);

    int result = permutation(N, R);
    printf("N P R = %d\n", result);

    return 0;
}