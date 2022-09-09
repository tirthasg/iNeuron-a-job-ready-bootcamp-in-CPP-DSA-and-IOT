#include <stdio.h>

int main(void)
{
    printf("Cubes of first 10 natural numbers: \n");
    for (int i = 1; i <= 10; i++)
        printf("%d\n", i * i * i);
    
    return 0;
}