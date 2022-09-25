#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    int nsp = N - 1, nst = 1;
    for (int i = 1; i <= 2 * N - 1; i++) {
        for (int j = 1; j <= nsp; j++)
            printf(" ");
        
        for (int j = 1; j <= nst; j++)
            printf("*");

        printf("\n");
        if (i < N) {
            nsp--;
            nst += 2;
        }
        else {
            nsp++;
            nst -= 2;
        }
    }

    return 0;
}