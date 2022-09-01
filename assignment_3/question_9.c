#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    printf("Enter three integers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    int max = (num1 <= num2) ? (num2 <= num3 ? num3 : num2) : 
                               (num1 <= num3 ? num3 : num1);
    printf("The maximum is %d\n", max);

    return 0;
}