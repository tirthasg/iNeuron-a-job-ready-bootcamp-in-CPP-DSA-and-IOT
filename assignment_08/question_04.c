#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    int nsp = 0, nst = N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= nsp; j++)
            printf(" ");
        
        for (int j = 1; j <= nst; j++)
            printf("*");

        printf("\n");
        nsp++;
        nst--;
    }

    return 0;
}