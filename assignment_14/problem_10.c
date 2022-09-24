#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    printf("Enter size of array: ");
    scanf("%d", &N);

    int *arr1 = (int *) malloc(sizeof(int) * N);

    printf("Enter elements of array: ");
    for (int i = 0; i < N; i++)
        scanf("%d", &arr1[i]);

    int *arr2 = (int *) malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        arr2[i] = arr1[i];

    printf("Elements of second array: ");
    for (int i = 0; i < N; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    free(arr1);
    free(arr2);

    return 0;    
}