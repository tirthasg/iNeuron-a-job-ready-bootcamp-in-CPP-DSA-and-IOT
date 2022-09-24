#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    
    return gcd(b % a, a);
}

int main(void)
{
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d%d", &a, &b);

    int result = gcd(a, b);
    printf("%d\n", result);

    return 0;
}