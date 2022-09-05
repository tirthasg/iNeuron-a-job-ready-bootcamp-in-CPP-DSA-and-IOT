#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    int i = 1, j, k;
    while (i <= N) {
        j = 1;
        while (j <= N - i + 1) {
            printf("%c ", 'A' + j - 1);
            j++;
        }

        k = 1;
        while (k <= 2 * (i - 1) - 1) {
            printf("  ");
            k++;
        }

        j = (i == 1) ? j - 2 : j - 1;
        while (j > 0) {
            printf("%c ", 'A' + j - 1);
            j--;
        }
        printf("\n");

        i++;
    }

    return 0;
}