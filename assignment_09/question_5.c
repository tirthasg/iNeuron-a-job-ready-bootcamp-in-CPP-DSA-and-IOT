#include <stdio.h>

int main(void)
{
    int var;
    printf("Enter an integer: ");
    scanf("%d", &var);

    switch (var) {
        case 1: printf("good"); break;
        case 2: printf("better"); break;
        case 3: printf("best"); break;
        default: printf("invalid");
    }

    return 0;
}