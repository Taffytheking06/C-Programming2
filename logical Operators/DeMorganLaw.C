#include <stdio.h>

int main() {
    int age = 25, income = 40000, credit_score = 680;

    printf("De Morgan's law Examples:\n");
    printf("==========================\n");

    // Original complex condition
    int complex_condition = !(age >= 21 && income >= 30000);
    printf("(age >= 18 && income >= 30000): %d\n", complex_condition);

    // Applying De Morgan's Law: !(A && B) = !A || !B
    int demorgan_version = (age < 18 || income < 30000);
    printf("(age < 18 || income < 30000): %d\n", demorgan_version);

    // Another example : (A || B) = !A && !B
    int complex_condition2 = !(age < 18 || credit_score < 650);
    printf("!(age < 18 || credit_score < 650): %d\n", complex_condition2);

    int demorgan_version2 = (age >= 18 && credit_score >= 650);
    printf("(age >= 18 && credit_score >= 650)", demorgan_version2);

    //Verify they're equivalent
    printf("\nEquivalent check:\n");
    printf("Both give same result: %d\n", complex_condition == demorgan_version);
    printf("Both give same result: %d\n", complex_condition2 == demorgan_version2);
    return 0;
}