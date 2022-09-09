#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0)
        printf("%d is not in the Fibonacci sequence\n", num);
    else if (num == 0 || num == 1)
        printf("%d is in the Fibonacci sequence\n", num);
    else {
        int first = 0, second = 1, next;
        while (second < num) {
            next = first + second;

            first = second;
            second = next;
        }

        if (second == num)
            printf("%d is in the Fibonacci sequence\n", num);
        else
            printf("%d is not in the Fibonacci sequence\n", num);
    }

    return 0;
}