#include <stdio.h>

//Function that has side effects
int expensive_operation(int x) {
    printf(" Performing expensive operation with %d...\n", x);
    return x * 2;
}

int main(){
    printf("=== SHORT-CIRCUIT EVALUATION DEMO ===\n");

    int a = 0, b = 5, c = 10;

    printf("\n1 AND short-circuit:\n");
    printf("Condition: (a != 0) && (expensive_operation(b) > 0)\n");
    if (a != 0 && expensive_operation(b) > 0) {
        printf("This won't execute\n");
    } else {
        printf("Expensive operation was SKIPPED due to short-circuit!\n");
    }

    printf("\n2. OR short-circuit:\n");
    printf("Condition: (c == 10) || (expensive_operation(a) > 0)\n");
    if (c == 10 || expensive_operation(a) > 0){
        printf("Expensive operation was SKIPPED due to short-circuit!\n");
    }

    printf("\n3. Complex short-circuit chain:\n");
    int x = 1, y = 0, z = 1;
    printf("Initial: x=%d, y=%d, z=%d\n", x, y, z);

    // This demonstrates how short-circuit affects variable modification

    if (x++ && y++ && z++){
        printf("All conditions true\n");
    } else{
        printf("Short-circuit occured\n");
    }
    printf("After: x=%d, y=%d, z=%d\n", x, y, z);
    printf("Note: y was incremented but z was not due to short-circuit\n");

    return 0;
}