#include <stdio.h>

int main(void)
{
    printf("First 10 odd natural numbers in reverse order: \n");
    for (int i = 19; i > 0; i -= 2)
        printf("%d\n", i);
    
    return 0;
}