#include <stdio.h>

int main() {
    printf("Modulus operator examples:\n");

    printf("10 %% 3 = %d\n", 10 % 3);
    printf("15 %% 4 = %d\n", 15 % 4);
    printf("20 %% 6 = %d\n", 20 % 6);
    printf("18 %% 4 = %d\n", 18 % 4);


    // Common uses of modulus:
    printf("\nPractical uses:\n");

    // Check if a number is even or odd
    int num = 17;
    if (num % 2 == 0) {
        printf("%d is even\n", num);
    }else{
        printf("%d is odd\n", num);
    }    


    // Get the last digit of a number 
    int number = 12345;
    int lastDigit = number % 10;
    printf("Last digit of %d is %d\n", number, lastDigit);

    return 0; 
}