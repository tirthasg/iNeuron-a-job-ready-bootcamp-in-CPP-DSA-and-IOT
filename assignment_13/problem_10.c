#include <stdio.h>

int power(int base, int exponent)
{
    if (exponent == 0)
        return 1;
        
    int half_power = power(base, exponent / 2);
    if (exponent & 1)
        return base * half_power * half_power;

    return half_power * half_power;    
}

int main(void)
{
    int base, exponent;
    printf("Enter two positive integers (base, and exponent): ");
    scanf("%d%d", &base, &exponent);

    int result = power(base, exponent);
    printf("%d\n", result);

    return 0;
}