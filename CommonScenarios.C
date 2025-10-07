#include <stdio.h>

int main(){
    // Exercice 1: Convert seconds to minutes and seconds
    int totalseconds = 500;
    int minutes = totalseconds / 60;
    int seconds = totalseconds % 60;
    printf("%d seconds = %d minutes and %d seconds\n", totalseconds, minutes, seconds);

    // Exercise 2: Calculate average
    int score1 = 85, score2 = 90, score3 = 78;
    int total = score1 + score2 + score3;
    float average = total / 3.0;  // Use 3.0 to force floating point vision 
    printf("Average: %d, %d, %d\n", score1, score2, score3);
    printf("Average score = %.2f\n", average);

    // Exercise 3: Check divisibility
    int number = 27;
    int divisor = 5;
    if (number % divisor == 0) {
        printf("%d is divisible by %d\n", number, divisor);
    }else{
        printf("%d is not divisble by %d (remainder: %d)\n",number, divisor, number % divisor);

    }

    // Exercise 4: Reverse a two-digit number
    int two_digit = 57;
    int reversed = (two_digit % 10) * 10 + (two_digit / 10);
    printf("Original: %d, Reversed: %d\n", two_digit, reversed);
    return 0;
}