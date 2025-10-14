#include <stdio.h>

int main(){
    int total = 0;
    int number;

    printf("Enter numbers to add (0 t0 atop):\n");

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0){
        total += number;    // add to total
        printf("Current total: %d\n", total);
        printf("Enter another number (0 to stop): ");
        scanf("%d", &number);
    }
    printf("Final total: %d\n", total);
    return 0;
}