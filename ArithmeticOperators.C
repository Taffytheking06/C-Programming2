#include <stdio.h>

int main(){
    int a = 15, b = 4;

    printf("a = %d, b = %d\n", a, b);

    //Addition
    printf("Addition: %d + %d = %d\n", a, b, a + b);

    //Subtration
    printf("Subtration: %d - %d = %d\n", a, b, a - b);

    //Multiplication
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);

    //Division
    printf("Division: %d / %d = %d\n", a, b, a / b);

    // Modulus
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);
    
    return 0;
}