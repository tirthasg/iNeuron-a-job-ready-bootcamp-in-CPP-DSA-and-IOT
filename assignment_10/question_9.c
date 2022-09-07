#include <stdio.h>

int digit_in_num(int num, int digit)
{
    if (num == digit)
        return 1;
    
    while (num != 0) {
        if (num % 10 == digit)
            return 1;

        num /= 10;
    }

    return 0;
}

int main(void)
{
    int num, digit;
    printf("Enter the number, and the digit: ");
    scanf("%d%d", &num, &digit);

    if (digit_in_num(num, digit))
        printf("%d is in %d\n", digit, num);
    else 
        printf("%d is not in %d\n", digit, num);
    
    return 0;
}