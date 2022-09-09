#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0)
        printf("%d doesn't have a set-bit\n", num);
    else {
        int position = 1;
        while (num != 0) {
            if (num & 1) {
                printf("Position of first set-bit is %d\n", position);
                break;
            }

            num >>= 1;
            position++;
        }
    }

    return 0;
}