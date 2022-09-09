#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    int i = 1, j;
    while (i <= N) {
        j = 1;
        while (j <= N - i + 1) {
            printf("%d", j);
            j++;
        }

        j = 1;
        while (j <= 2 * (i - 2) + 1) {
            printf(" ");
            j++;
        }

        j = (i == 1) ? N - 1 : N - i + 1;
        while (j > 0) {
            printf("%d", j);
            j--;
        }
        printf("\n");

        i++;
    }

    return 0;
}