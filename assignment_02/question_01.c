#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Unit digit of %d is %d\n", num, abs(num % 10));

    return 0;
}