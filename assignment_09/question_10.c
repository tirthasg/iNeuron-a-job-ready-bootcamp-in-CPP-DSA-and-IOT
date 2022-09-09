#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;
    printf("Enter the coefficients: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    double D = b * b - 4 * a * c;
    double root1, root2;
    switch (D >= 0) {
        case 0: printf("The roots are %.2lf + %.2lfi and %.2lf - %.2lfi\n",
                        -b / 2 * a, sqrt(-D) / 2 * a, 
                        -b / 2 * a, sqrt(-D) / 2 * a);
                break;
        
        case 1: printf("The roots are %.2lf and %.2lf\n",
                        (-b + sqrt(D)) / 2 * a, (-b - sqrt(D)) / 2 * a);
    }

    return 0;
}