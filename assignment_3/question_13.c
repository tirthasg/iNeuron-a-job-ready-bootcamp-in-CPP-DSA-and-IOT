#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 2 == 0)
        printf("%d is divisible by both\n", num);
    else 
        printf("%d is not divisible by both\n", num);

    return 0;
}