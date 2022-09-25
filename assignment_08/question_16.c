#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    int nsp1 = N - 1, nsp2 = -1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= nsp1; j++)
            printf(" ");

        printf("*");

        for (int j = 1; j <= nsp2; j++)
            if (i == N)
                printf("*");
            else 
                printf(" ");

        if (i != 1)
            printf("*");
        
        printf("\n");
        nsp1--;
        nsp2 += 2;
    }

    return 0;
}