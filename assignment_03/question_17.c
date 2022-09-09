#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter lengths of the sides of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0)
        printf("Invalid triangle\n");
    else if (a + b > c && b + c > a && c + a > b)
        printf("Valid triangle\n");
    else 
        printf("Invalid triangle\n");

    return 0;
}