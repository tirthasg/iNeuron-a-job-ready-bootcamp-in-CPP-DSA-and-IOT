#include <stdio.h>

#define PI 3.14159

int main(void)
{
    float radius, area;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf("Area of circle is %.2f having the radius %.2f", area, radius);

    return 0;
}