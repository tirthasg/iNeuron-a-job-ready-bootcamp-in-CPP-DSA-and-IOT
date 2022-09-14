#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    
    int rem = b % a;
    while (rem != 0) {
        b = a;
        a = rem;

        rem = b % a;
    }

    return a;
}

int main(void)
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d%d", &num1, &num2);

    printf("LCM of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}