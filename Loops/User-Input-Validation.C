#include <stdio.h>

int main(){
    int number;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    // Keep asking until we get a positive number
    while (number <= 0) {
        printf("Invalid input! Enter a positve number: ");
        scanf("%d", &number);
    }

    printf("Thank you! You entered: %d\n", number);
    return 0;
}