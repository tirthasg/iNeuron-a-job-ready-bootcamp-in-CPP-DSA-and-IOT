#include <stdio.h>

int main(void)
{
    int N = 10;

    int i = 1, j, M = N / 2;
    while (i <= M) {
        if (i <= 2) {
            i++;
            continue;
        }

        j = 1;
        while (j <= M - i) {
            printf(" ");
            j++;
        }

        j = 1;
        while (j <= 2 * i - 1) {
            printf("*");
            j++;
        }

        j = 1;
        while (j <= 2 * (M - i) + 1) {
            printf(" ");
            j++;
        }

        j = 1;
        while (j <= 2 * i - 1) {
            printf("*");
            j++;
        }
        printf("\n");

        i++;
    }

    i = 1;
    while (i <= N) {
        j = 1;
        while (j <= i - 1) {
            printf(" ");
            j++;
        }

        j = 1;
        while (j <= 2 * (N - i) + 1) {
            if (i == 1 && j == 7) {
                printf("MySirG");
                while (j <= 12)
                    j++;
                
                continue;
            }
            printf("*");
            j++;
        }
        printf("\n");
        
        i++;
    }

    return 0;
}