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
            printf("  ");
            j++;
        }

        j = 1;
        while (j <= i) {
            printf("%c ", 'A' + j - 1);
            j++;
        }

        j -= 2;
        while (j > 0) {
            printf("%c ", 'A' + j - 1);
            j--;
        }
        printf("\n");

        i++;
    }

    return 0;
}