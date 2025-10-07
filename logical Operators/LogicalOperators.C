#include <stdio.h>

int main() {
    int a = 1, b = 0;  // 1 = true, 0 = false
    
    printf("a = %d (true), b = %d (false)\n\n", a, b);
    
    // 1. Logical AND (&&) - Both must be true
    printf("a && b: %d\n", a && b);    // 0 (false)
    printf("a && a: %d\n", a && a);    // 1 (true)
    printf("b && b: %d\n", b && b);    // 0 (false)
    
    // 2. Logical OR (||) - At least one must be true
    printf("a || b: %d\n", a || b);    // 1 (true)
    printf("a || a: %d\n", a || a);    // 1 (true)
    printf("b || b: %d\n", b || b);    // 0 (false)
    
    // 3. Logical NOT (!) - Reverses the value
    printf("!a: %d\n", !a);           // 0 (false)
    printf("!b: %d\n", !b);           // 1 (true)
    printf("!!a: %d\n", !!a);         // 1 (true)
    
    return 0;
}