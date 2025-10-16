#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    // keep using while until we get a valid input
    while (age <= 0 || age > 120) {
        printf("Invalid age!! Please enter age between 1 and 120: ");
        scanf("%d", &age);
    }

    printf("Thank you! Your age is: %d\n", age);
    return 0;
}