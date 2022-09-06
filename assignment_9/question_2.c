#include <stdio.h>

int main(void)
{
    printf("Pick an option from the following: \n\n");
    printf("Enter 1 for addition\n");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
    printf("Enter any other key to exit menu\n\n");

    char choice;
    printf("Enter your choice: ");
    scanf("%c", &choice);

    int num1, num2;
    printf("\n");
    switch (choice) {
        case '1': printf("Enter two integers: ");
                  scanf("%d%d", &num1, &num2);
                  printf("%d + %d = %d\n", num1, num2, num1 + num2);
                  break;
        
        case '2': printf("Enter two integers: ");
                  scanf("%d%d", &num1, &num2);
                  printf("%d - %d = %d\n", num1, num2, num1 - num2);
                  break;
        
        case '3': printf("Enter two integers: ");
                  scanf("%d%d", &num1, &num2);
                  printf("%d * %d = %d\n", num1, num2, num1 * num2);
                  break;
        
        case '4': printf("Enter two integers: ");
                  scanf("%d%d", &num1, &num2);
                  printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
                  break;

        default: printf("Exiting calculator\n");
    }

    return 0;
}