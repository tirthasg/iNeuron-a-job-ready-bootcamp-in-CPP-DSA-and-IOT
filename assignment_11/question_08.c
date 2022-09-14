#include <stdio.h>

void print_pascal_triangle(int N)
{
    if (N <= 0)
        return;

    int i = 1, j, val;
    while (i <= N) {
        val = 1;
        j = 1;
        while (j <= i) {
            printf("%d ", val);
            
            val = val * (i - j) / j;
            j++;
        }
        printf("\n");
        i++;
    }
}

int main(void)
{
    int N;
    printf("Enter count of rows: ");
    scanf("%d", &N);

    print_pascal_triangle(N);

    return 0;
}