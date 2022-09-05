#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    int i = 1, j;
    while (i <= N) {
        j = 1;
        while (j <= i) {
            if (j == 1 || j == i || i == N)
                printf("* ");
            else 
                printf("  ");
            j++;
        }
        printf("\n");

        i++;
    }

    return 0;
}