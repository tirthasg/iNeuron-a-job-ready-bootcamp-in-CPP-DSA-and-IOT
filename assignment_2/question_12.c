#include <stdio.h>

#define RATE 76.23

int main(void)
{
    double amount_in_inr, amount_in_usd;
    printf("Enter the amount in INR: ");
    scanf("%lf", &amount_in_inr);

    amount_in_usd = amount_in_inr / RATE;
    printf("%.2lf in INR is %.2lf in USD\n", amount_in_inr, amount_in_usd);

    return 0;
}