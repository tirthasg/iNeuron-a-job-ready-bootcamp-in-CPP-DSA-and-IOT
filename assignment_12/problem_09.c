#include <stdio.h>

void print_octal(int num)
{
    if (num <= 0)
        return;
        
    print_octal(num / 8);
    printf("%d", num % 8);
}

int main(void)
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    print_octal(num);

    return 0;
}