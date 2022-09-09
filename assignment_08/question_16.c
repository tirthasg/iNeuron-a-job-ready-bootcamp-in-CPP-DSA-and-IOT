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
        while (j <= 2 * i - 1) {
            if (j == 1 || j == 2 * i - 1 || i == N) 
                printf("*");
            else 
                printf(" ");
            j++;
        }
        printf("\n");

        i++;
    }

    return 0;
}