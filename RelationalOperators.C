#include <stdio.h>

int main(){
    int a = 10, b = 5;

    printf("a = %d, b = %d\n", a, b);

    //1. Equal to (==)
    printf("a == b: %d\n", a == b); // 0 (false)

    //2. Not equal to (!=)
    printf("a != b: %d\n", a != b); // 1 (true)

    //3. Greater than (>)
    printf("a > b: %d\n", a > b); // 1 (true)

    //4. Less than (<)
    printf("a < b: %d\n", a < b); // 0 (false)
    
    //5. Greater than or equal to (>=)
    printf("a >= b: %d\n", a >= b), // 1 (true)

    //6. Less than or equal to (<=)
    printf("a <= b: %d\n", a <= b); // 0 (false)

    return 0;
}
