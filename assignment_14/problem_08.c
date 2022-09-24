#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    int N;
    printf("Enter size of array: ");
    scanf("%d", &N);

    int *arr = (int *) malloc(sizeof(int) * N);

    printf("Enter elements of array: ");
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    int smallest = INT_MAX;
    int second_smallest = INT_MAX;
    for (int i = 0; i < N; i++)
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < second_smallest)
            second_smallest = arr[i];
    
    if (second_smallest == INT_MAX)
        printf("The second smallest element doesn't exist\n");
    else 
        printf("The second smallest element of the array is %d\n", second_smallest);

    free(arr);

    return 0;
}