#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    int nst = N, nsp = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= nst; j++)
            printf("*");

        for (int j = 1; j <= nsp; j++)
            printf(" ");
        
        for (int j = 1; j <= nst; j++)
            printf("*");
        
        printf("\n");
        nst--;
        nsp += 2;
    }

    return 0;
}