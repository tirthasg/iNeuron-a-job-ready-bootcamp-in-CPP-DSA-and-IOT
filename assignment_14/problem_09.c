#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    printf("Enter size of array: ");
    scanf("%d", &N);

    int *arr = (int *) malloc(sizeof(int) * N);
    
    printf("Enter elements of array: ");
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    
    printf("Elements of array is reverse order: ");
    for (int i = N - 1; i >= 0; i--)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);

    return 0;
}