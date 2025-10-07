#include <stdio.h>

int main() {
    int a = 1, b = 0, c = 1;

    printf("Understanding Procedence:\n");

    // ! has higher precedence than && 
    int result1 = !a && b;     //Equivalent to: (!a) && b
    printf("!a && b = %d\n", result1);

    // && has higher precedence than ||
    int result2 = a || b && c;  //Equivalent to: a || (b && c)
    printf("a || b && c = %d\n", result2);

    // Use parentheses for clarity
    int result3 = (a || b) && c; 
    printf("(a || b) && c = %d\n", result3);

    // Complex expression
    int x = 5, y = 10, z = 15;
    int complex = x > 0 && y < 20 || z == 15;  // & before ||
    printf("x > 0 && y < 20 || z == 15 = %d\n", complex);

    int clear = (x > 0 && y < 20) || z == 15;  // same but clear
    printf("(x > 0 && y < 20) || z == 15 = %d\n", clear);

    return 0;
}