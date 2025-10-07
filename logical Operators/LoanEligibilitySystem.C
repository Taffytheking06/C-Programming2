#include <stdio.h>

int main() {
    int age, income, credit_score;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your annual income: ");
    scanf("%d", &income);
    printf("Enter credit score: ");
    scanf("%d", &credit_score);

    // Add conditions to check loan eligibility:
    int is_eligible = ((age >= 21 && income >= 30000 && credit_score >= 650 || (income >= 50000 && credit_score >= 700)) && age <= 70);
    
    if (is_eligible){
        printf("eligible for loan\n");
    } else {
        printf("Not eligiible for loan\n");

        // Provide reasons why not eligible
        if (age < 21) {
            printf("  -Too young (must be 21+)\n");
        }
        if (age > 70) {
            printf("  -Too old (must be 70 or younger)\n");
        }
        if (income < 30000){
            printf("  -Income too low (need $30000+)\n");
        }
        if (credit_score < 650) {
            printf("  -Credit score too low (need 650+)\n");
        }
    }
    return 0;
}