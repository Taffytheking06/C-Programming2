#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d is positive\n", number);    
    }
    if (number < 0) {
        printf("%d is a negative\n", number);
    }
    if (number == 0) {
        printf("You entered zero\n");
    }

    // check if number is even
    if (number % 2 == 0) {
        printf("%d is even\n", number);
    } else{
        printf("%d is odd\n", number);
    }
    return 0;
}