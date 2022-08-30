#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int last_bit = num & 1;
    if (last_bit)
        printf("%d is odd\n", num);
    else
        printf("%d is even\n", num);

    return 0;
}