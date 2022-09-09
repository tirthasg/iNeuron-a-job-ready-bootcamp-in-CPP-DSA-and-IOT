#include <stdio.h>

int main(void)
{
    printf("First 10 even natural numbers: \n");
    for (int i = 1; i <= 10; i++)
        printf("%d\n", 2 * i);
    
    return 0;
}