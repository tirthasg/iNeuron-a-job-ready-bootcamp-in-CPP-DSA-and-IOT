#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d%d", &a, &b);

    int min = a <= b ? a : b;
    int max = a <= b ? b : a;
    
    int gcd;
    if (min == 0)
        gcd = max;
    else if (max % min == 0)
        gcd = min;
    else {
        int rem = max % min;
        while (rem != 0) {
            max = min;
            min = rem;
            rem = max % min;
        }
        gcd = min;
    }

    if (a == 0 || b == 0)
        printf("LCM is not defined\n");
    else {
        int lcm = a * (b / gcd);
        printf("The lcm of %d and %d is %d\n", a, b, lcm);
    }
    
    return 0; 
}