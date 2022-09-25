#include <stdio.h>

int main(void)
{
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    int nsp = 0, nst = 2 * N - 1, val;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= nsp; j++)
            printf(" ");
        
        val = 1;
        for (int j = 1; j <= nst; j++) {
            printf("%d", val);
            if (j < N - i + 1)
                val++;
            else 
                val--;
        }

        printf("\n");
        nsp++;
        nst -= 2;
    }

    return 0;
}