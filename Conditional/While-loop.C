#include <stdio.h>

int main() {
    float price, total = 0;
    printf("Enter the price of items (enter 0 to finish):\n");
    while(1) {                          // infinite loop, will break when user enters 0
        printf("Enter price: ");
        scanf("%d", &price);

        if (price == 0)
            break;                      //exit loop when user enters 0

        total += price;                 // add price to total
    }

    printf("Total bill = R.s %.2f\n", total);
    return 0;
}