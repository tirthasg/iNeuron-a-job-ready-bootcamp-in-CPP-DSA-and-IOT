#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a 3-digit integer: ");
    scanf("%d", &num);

    int digit = num % 10;
    digit *= 100;
    
    num /= 10;
    num += digit;

    printf("Value of integer after rotating 1-place to right is %d\n", num);

    return 0;
}