#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0)
        printf("%d is positive\n", num);
    else 
        printf("%d is non-positive\n", num);

    return 0;
}