#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    a = abs(a);
    b = abs(b);

    if (a == 0 || b == 0)
        printf("They are not co-prime\n", b);
    else {
        int rem = b % a;
        while (rem != 0) {
            b = a;
            a = rem;

            rem = b % a;
        }
        
        if (a == 1)
            printf("They are co-prime\n");
        else 
            printf("They are not co-prime\n");
    }

    return 0;
}