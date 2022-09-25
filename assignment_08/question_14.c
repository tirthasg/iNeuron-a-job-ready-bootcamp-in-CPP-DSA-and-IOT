#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++)
            if (j == 1 || i - j == 0 || i == N)
                printf("* ");
            else 
                printf("  ");
        
        printf("\n");
    }
        

    return 0;
}