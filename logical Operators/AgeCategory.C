#include <stdio.h>

int main() {
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("\nAge Category Analysis:\n");
    
    // Child: 0-12
    int is_child = (age >= 0 && age <= 12);
    printf("Child (0-12): %d\n", is_child);
    
    // Teenager: 13-19
    int is_teen = (age >= 13 && age <= 19);
    printf("Teenager (13-19): %d\n", is_teen);
    
    // Adult: 20-64
    int is_adult = (age >= 20 && age <= 64);
    printf("Adult (20-64): %d\n", is_adult);
    
    // Senior: 65+
    int is_senior = (age >= 65);
    printf("Senior (65+): %d\n", is_senior);
    
    // Valid age (not negative)
    int is_valid = (age >= 0);
    printf("Valid age: %d\n", is_valid);
    
    return 0;
}