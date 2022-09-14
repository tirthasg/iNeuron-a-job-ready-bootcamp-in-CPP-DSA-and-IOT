#include <stdio.h>

double square(double num)
{
    return num * num;
}

int main(void)
{
    double num, num_squared;
    printf("Enter a number: ");
    scanf("%lf", &num);

    num_squared = square(num);
    printf("Square of %.2lf is %.2lf\n", num, num_squared);

    return 0;
}