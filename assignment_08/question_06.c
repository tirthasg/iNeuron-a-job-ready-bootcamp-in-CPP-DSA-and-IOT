#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    int i = 1, j;
    while (i <= N) {
        j = 1;
        while (j <= i - 1) {
            printf(" ");
            j++;
        }

        j = 1;
        while (j <= 2 * (N - i) + 1) {
            printf("*");
            j++;
        }
        printf("\n");

        i++;
    }

    return 0;
}