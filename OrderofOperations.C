#include <stdio.h>

int main() {
    int result;

    printf("Order of operations examples:\n");

    // Multiplication and division before addition and subtraction
    result = 5 + 3 * 2;        // 3*2=6, then 5+6=11
    printf("5 + 3 * 2 = %d\n", result);

    result = 10 - 4 / 2;        // 4/2=2, then 10-2=8
    printf("10 - 4 / 2 = %d\n", result);

    //Use parentheses to change order
    result = (5 + 3) * 2;   // (5+3)=8, then 8*2=16
    printf("(5 + 3) * 2 = %d\n", result);

    result = 2 * 3 + 4 * 5;       // 2*3=6, 4*5=20, then 6+20=26
    printf("2 * 3 + 4 * 5 = %d\n", result);

    // complex expression
    result = 10 + 2 * 3 - 8 / 4;  // 2*3=6, 8/4=2, then 10+6-2=14
    printf("10 + 2 * 3 - 8 / 4 = %d\n", result);

    return 0;


}