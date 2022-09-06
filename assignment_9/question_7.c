#include <stdio.h>

int main(void)
{
    int units_consumed;
    printf("Enter value of units consumed: ");
    scanf("%d", &units_consumed);

    double price = 0;
    switch (units_consumed <= 50) {
        case 1: price += units_consumed * 0.5;
                break;
        
        case 0: price += 50 * 0.5;
                units_consumed -= 50;
                switch (units_consumed <= 100) {
                    case 1: price += units_consumed * 0.75;
                            break;
                    
                    case 0: price += 100 * 0.75;
                            units_consumed -= 100;
                            switch (units_consumed <= 100) {
                                case 1: price += units_consumed * 1.2;
                                        break;
                                
                                case 0: price += 100 * 1.2;
                                        units_consumed -= 100;
                                        price += units_consumed * 1.5;
                                        break;
                            }
                }
    }
    
    price += 0.2 * price;
    printf("The total electricity bill is Rs %.2lf\n", price);

    return 0;
}