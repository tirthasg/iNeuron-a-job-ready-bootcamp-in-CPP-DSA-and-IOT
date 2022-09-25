#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    int nst = N - 1, nsp = -1;
    char ch;
    for (int i = 1; i <= N; i++) {
        ch = 'A';
        for (int j = 1; j <= nst; j++) {
            printf("%c ", ch);
            ch++;
        }

        if (i == 1)
            printf("%c ", ch);
        
        for (int j = 1; j <= nsp; j++)
            printf("  ");

        ch--;
        for (int j = 1; j <= nst; j++) {
            printf("%c ", ch);
            ch--;
        }

        printf("\n");
        if (i != 1)
            nst--;
        nsp += 2;
    }

    return 0;
}