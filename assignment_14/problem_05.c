#include <stdio.h>

int main(void)
{
    int arr[10];

    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    int smallest = arr[0];
    for (int i = 1; i < 10; i++)
        if (arr[i] < smallest)
            smallest = arr[i];
            
    printf("The smallest element of array is %d\n", smallest);
    
    return 0;
}