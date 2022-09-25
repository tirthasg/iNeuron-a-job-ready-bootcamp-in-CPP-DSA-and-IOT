#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++)
            if (i == N || j == N || i + j == N + 1)
                printf("* ");
            else 
                printf("  ");
        
        printf("\n");
    }

    return 0;
}