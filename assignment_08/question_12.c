#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    int nsp = 0, nst = 2 * N - 1;
    char ch;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= nsp; j++)
            printf("  ");

        ch = 'A';
        for (int j = 1; j <= nst; j++) {
            printf("%c ", ch);
            if (j < N - i + 1)
                ch++;
            else 
                ch--;
        }

        printf("\n");
        nsp++;
        nst -= 2;
    }

    return 0;
}