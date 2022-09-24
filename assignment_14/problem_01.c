#include <stdio.h>

int main(void)
{
    int arr[10];
    
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    int sum = 0;
    for (int i = 0; i < 10; i++)
        sum += arr[i];
    printf("Sum of elements of array is %d\n", sum);

    return 0;
}