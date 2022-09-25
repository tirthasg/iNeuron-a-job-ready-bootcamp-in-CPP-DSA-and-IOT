#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    int nst = N - 1, nsp = -1, val;
    for (int i = 1; i <= N; i++) {
        val = 1;
        for (int j = 1; j <= nst; j++) {
            printf("%d", val);
            val++;
        }

        if (i == 1) {
            printf("%d", val);
        }

        for (int j = 1; j <= nsp; j++)
            printf(" ");
        
        val--;
        for (int j = 1; j <= nst; j++) {
            printf("%d", val);
            val--;
        }

        printf("\n");
        if (i != 1)
            nst--;
        nsp += 2;
    }

    return 0;
}