#include <stdio.h>

int main(){
    //Takes a 3-digit number and calculates the sum of its digits
    int number, digit1, digit2, digit3, sum;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    // Extract digits using division and modulus
    digit1 = number / 100;      // Gets hundred place (123/100=1)
    
    digit2 = (number / 10) % 10;    // Gets tens place (123/10=12 % 10 = 2)

    digit3 = number % 10;        // Gets units place (123 % 10 = 3)
    
    sum = digit1 + digit2 + digit3;

    printf("Number: %d\n", number);
    printf("Digits: %d, %d, %d\n", digit1, digit2, digit3);
    printf("Sum of digits: %d + %d + %d = %d\n", digit1, digit2, digit3, sum);
return 0;


//Converts temperature from Fahrenheit to Celsius

//Calculates the area of a circle given its radius
}