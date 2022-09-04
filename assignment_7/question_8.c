#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int is_prime;
    do {
        num++;

        is_prime = 1;
        for (int d = 2; d * d <= num; d++)
            if (num % d == 0) {
                is_prime = 0;
                break;
            }
        
        if (is_prime) {
            printf("Next prime number is %d\n", num);
            break;
        }
    }
    while (1);

    return 0;
}