#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if ((num & 1) == 0)
        printf("%d is even\n", num);
    else 
        printf("%d is odd\n", num);
    
    return 0;
}