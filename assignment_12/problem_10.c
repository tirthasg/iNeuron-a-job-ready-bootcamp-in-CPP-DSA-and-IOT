#include <stdio.h>

void print_reverse(int num)
{
    if (num <= 0)
        return;
        
    printf("%d", num % 10);
    print_reverse(num / 10);
}

int main(void)
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    print_reverse(num);
    
    return 0;
}