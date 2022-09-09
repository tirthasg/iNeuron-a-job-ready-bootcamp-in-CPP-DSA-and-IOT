#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    int i = 1, j;
    while (i <= N) {
        j = 1;
        while (j <= N - i) {
            printf(" ");
            j++;
        }

        j = 1;
        while (j <= i) {
            printf("*");
            j++;
        }

        j -= 2;
        while (j > 0) {
            printf("*");
            j--;
        }
        printf("\n");

        i++;
    }

    i = 1;
    while (i <= N - 1) {
        j = 1;
        while (j <= i) {
            printf(" ");
            j++;
        }

        j = 1;
        while (j <= 2 * (N - 1) - 1 + (i - 1) * -2) {
            printf("*");
            j++;
        }
        printf("\n");

        i++;
    }

    return 0;
}