#include <stdio.h>

#define PI 3.14159

double get_area(double radius)
{
    return PI * radius * radius;   
}

int main(void)
{
    double radius, area;
    printf("Enter radius of circle: ");
    scanf("%lf", &radius);

    area = get_area(radius);
    printf("Area of circle of radius %.2lf units is %.2lf sq units\n", radius, area);

    return 0;
}