#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("%d without it's last digit is %d\n", num, num / 10);

    return 0;
}