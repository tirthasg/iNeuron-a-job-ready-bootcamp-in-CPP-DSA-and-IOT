#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    printf("Enter a 3-digit integer: ");
    scanf("%d", &num);

    int sum = 0, temp_value = abs(num);

    sum += temp_value % 10;
    temp_value /= 10;

    sum += temp_value % 10;
    temp_value /= 10;

    sum += temp_value % 10;
    
    printf("The sum of digits of %d is %d\n", num, sum);
}