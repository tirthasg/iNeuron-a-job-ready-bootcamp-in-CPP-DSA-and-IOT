#include <stdio.h>

int main(void)
{
    float a, b, c;
    printf("Enter the values of coefficients: ");
    scanf("%f%f%f", &a, &b, &c);

    int D = b * b - 4 * a * c;
    if (D > 0)
        printf("The roots are real & distinct\n");
    else if (D == 0)
        printf("The roots are real & equal\n");
    else 
        printf("The roots are imaginary\n");

    return 0;
}