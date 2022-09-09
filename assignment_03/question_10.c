#include <stdio.h>

int main(void)
{
    float cost_price, selling_price;
    printf("Enter the cost price, and selling price: ");
    scanf("%f%f", &cost_price, &selling_price);

    float difference = selling_price - cost_price;
    float percentage = (difference / cost_price) * 100.0f;
    if (percentage < 0.0f)
        printf("A loss of %.2f%% is incurred\n", -percentage);
    else if (percentage == 0.0f)
        printf("Neither profit nor loss made\n");
    else 
        printf("A profit of %.2f%% is incurred\n", percentage);
    
    return 0;
}