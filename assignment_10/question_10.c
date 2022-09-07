#include <stdio.h>

void prime_factorization(int num)
{
    if (num <= 1)
        return;

    while (num % 2 == 0) {
        printf("%d ", 2);
        num /= 2;
    }

    while (num % 3 == 0) {
        printf("%d ", 3);
        num /= 3;
    }

    for (int d = 5; d * d <= num; d += 6) {
        while (num % d == 0) {
            printf("%d ", d);
            num /= d;
        }

        while (num % (d + 2) == 0) {
            printf("%d ", d + 2);
            num /= (d + 2);
        }
    }

    if (num > 1)
        printf("%d ", num);
    printf("\n");
}

int main(void)
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    prime_factorization(num);

    return 0;
}