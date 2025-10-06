#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nAge Verification:\n");
    printf("Can vote (>= 18): %d\n", age >= 18);
    printf("Is senior citizen (>= 65): %d\n", age >= 65);
    printf("Is a teenager (13-19): %d\n", (age >= 13) && (age <= 19));
    printf("Is a child (<13): %d\n", age < 13);
    return 0;
}