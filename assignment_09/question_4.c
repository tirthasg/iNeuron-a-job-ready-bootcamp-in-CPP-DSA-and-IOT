#include <stdio.h>

int main(void)
{
    printf("Pick an option from the following: \n\n");
    printf("Enter 1 for isosceles triangle verification\n");
    printf("Enter 2 for right-angled triangle verification\n");
    printf("Enter 3 for equilateral triangle verification\n");
    printf("Enter any other key to exit menu\n\n");

    char choice;
    printf("Enter your choice: ");
    scanf("%c", &choice);

    int side1, side2, side3;
    switch (choice) {
        case '1': printf("Enter the sides: ");
                  scanf("%d%d%d", &side1, &side2, &side3);
                  
                  if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
                      printf("Invalid triangle\n");
                      break;
                  }
                  
                  if (side1 == side2 || side2 == side3 || side3 == side1)
                      printf("Triangle is an isosceles triangle\n");
                  else
                      printf("Triangle is not an isoscles triangle\n");

                  break;

        case '2': printf("Enter the sides: ");
                  scanf("%d%d%d", &side1, &side2, &side3);
                  
                  if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
                      printf("Invalid triangle\n");
                      break;
                  }
                
                  if (side1 * side1 + side2 * side2 == side3 * side3 ||
                      side2 * side2 + side3 * side3 == side1 * side1 ||
                      side3 * side3 + side1 * side1 == side2 * side2)
                      printf("Triangle is a right-angled triangle\n");
                  else 
                      printf("Triangle is not a right-angled triangle\n");
                  
                  break;
        
        case '3': printf("Enter the sides: ");
                  scanf("%d%d%d", &side1, &side2, &side3);
                  
                  if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
                      printf("Invalid triangle\n");
                      break;
                  }

                  if (side1 == side2 && side2 == side3 && side3 == side1)
                      printf("Triangle is an equilateral triangle\n");
                  else 
                      printf("Triangle is not an equilateral triangle\n");
                 
                  break;
        
        default: printf("Exiting calculator\n");
    }

    return 0;
}