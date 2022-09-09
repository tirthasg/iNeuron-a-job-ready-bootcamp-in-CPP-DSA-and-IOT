#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == num % 1000 && num / 100 != 0)
        printf("%d is a 3-digit number\n", num);
    else 
        printf("%d is not a 3-digit number\n", num);

    return 0;
}