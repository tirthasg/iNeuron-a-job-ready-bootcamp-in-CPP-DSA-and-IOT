#include <stdio.h>

double get_simple_interest(double principal, double rate, double time) 
{
    return principal * rate * time / 100.0;
}

int main(void)
{
    double principal, rate, time, simple_interest;
    printf("Enter values of principal, rate, and time: ");
    scanf("%lf%lf%lf", &principal, &rate, &time);

    simple_interest = get_simple_interest(principal, rate, time);
    printf("The simple interest incurred is Rs %.2lf\n", simple_interest);

    return 0;
}