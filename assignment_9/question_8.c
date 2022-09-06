#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    switch (num > 0) {
        default: num = -num;
    } 
    printf("Number after transformation is %d\n", num);

    return 0;
}