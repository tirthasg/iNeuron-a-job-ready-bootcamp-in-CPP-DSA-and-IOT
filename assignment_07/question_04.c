#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    a = abs(a);
    b = abs(b);

    if (a == 0)
        printf("The HCF is %d\n", b);
    else if (b == 0)
        printf("The HCF is %d\n", a);
    else {
        int rem = b % a;
        while (rem != 0) {
            b = a;
            a = rem;

            rem = b % a;
        }
        printf("The HCF is %d\n", a);
    }

    return 0;
}