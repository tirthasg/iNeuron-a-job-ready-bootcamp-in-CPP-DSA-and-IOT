#include <stdio.h>

int main(void)
{
    int arr[10];

    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    int largest = arr[0];
    for (int i = 1; i < 10; i++)
        if (largest < arr[i])
            largest = arr[i];
            
    printf("The largest element of array is %d\n", largest);
    
    return 0;
}