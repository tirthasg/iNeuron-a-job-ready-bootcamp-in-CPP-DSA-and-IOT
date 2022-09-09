#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d%d", &num1, &num2);

    int max = num1 <= num2 ? num2 : num1;
    printf("The maximum is %d\n", max);

    return 0;
}