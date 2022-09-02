#include <stdio.h>

int main(void)
{
    printf("Multiplication table of 5: \n");
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", 5, i, 5 * i);

    return 0;
}