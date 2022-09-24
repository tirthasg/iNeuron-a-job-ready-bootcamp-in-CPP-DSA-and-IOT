#include <stdio.h>

int main(void)
{
    int arr[10];

    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    
    int sum_of_odds = 0;
    int sum_of_evens = 0;
    for (int i = 0; i < 10; i++)
        if (arr[i] & 1)
            sum_of_odds += arr[i];
        else 
            sum_of_evens += arr[i];
    
    printf("Sum of even elements of array is %d\n", sum_of_evens);
    printf("Sum of odd elements of array is %d\n", sum_of_odds);

    return 0;
}