#include <stdio.h>

int main(){
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("\nNumber Properties for %d:\n", number);

    // Positive and even
    int positive_even = (number > 0 && number % 2 == 0);
    printf("Positive and even: %d\n", positive_even);

    // Negative or odd
    int negative_or_odd = (number < 0 || number % 2 != 0);
    printf("Negative or odd: %d\n", negative_or_odd);

    // Divisible by 3 AND 5
    int div_by_3_and_5 = (number % 3 == 0 && number % 5 == 0);
    printf("Divisible by 3 and 5: %d\n", div_by_3_and_5);

    // Not a single digit
    int not_single_digit = !(number >= 0 && number <= 9);
    printf("Not a single digit: %d\n", not_single_digit);

    // Between 50 and 100 inclusive
    int between_50_100 = (number > 50 && number < 100);
    printf("Between 50 and 100: %d\n", between_50_100);

    return 0;
}
    