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
    
    double avg = sum / 10.0;
    printf("Average of elements of array is %.2lf\n", avg);

    return 0;
}