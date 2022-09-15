#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

int main(void)
{
    float radius, area;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = M_PI * radius * radius;
    printf("Area of circle is %.2f having the radius %.2f", area, radius);

    return 0;
}