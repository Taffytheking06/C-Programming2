#include <stdio.h>

int main(){
    //Converts temperature from Fahrenheit to Celsius
    float Fahrenheit;
    float Celcius;

    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &Fahrenheit);

    Celcius = (Fahrenheit - 32) * 5.0 / 9.0;
    printf("The temperature in Celcius is: %.2f\n", Celcius);
    return 0;
    
}