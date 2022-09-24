#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    int N;
    printf("Enter size of array: ");
    scanf("%d", &N);

    int *arr = (int*) malloc(sizeof(int) * N);

    printf("Enter elements of array: ");
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    int largest = INT_MIN;
    int second_largest = INT_MIN;
    for (int i = 0; i < N; i++)
        if (largest < arr[i]) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] != largest && second_largest < arr[i])
            second_largest = arr[i];
    
    if (second_largest == INT_MIN)
        printf("The second largest element doesn't exist\n");
    else 
        printf("The second largest element of array is %d\n", second_largest);

    free(arr);

    return 0;
}