#include <stdio.h>

int main() {
    int x = 0, y = 5;

    // With AND (&&), if first is false, second is not evaluated
    if (x != 0 && y / x > 2) {     //Safe! won't divide by zero
        printf("This wont execute\n");
    } else {
        printf("Short-circuit AND worked!\n");
    }

    // With OR (||), if first is true, second is not evaluated
    if (x == 0 || y / x > 2) {     // Safe! won't divide by zero
        printf("Short-circuit OR worked!\n");
    }

    // Demonstration
    int a = 1, b = 1;

    printf("\nBefore: a = %d, b = %d\n", a, b);

    // Only a is incremented because first condition is false
    if (a == 0 && ++b) {
        printf("This won't execute\n");
    }
    printf("After AND: a = %d, b = %d\n", a, b);

    // Reset
    a = 0; b = 1;
    printf("\nBefore: a = %d, b = %d\n", a, b);

    // Only a is incremented because first condition is true
    if (a == 0 || ++b) {
        printf("This will execute\n");
    }

    printf("After OR: a = %d, b = %d\n", a, b);
    return 0;
}