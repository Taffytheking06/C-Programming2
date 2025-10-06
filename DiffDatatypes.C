#include <stdio.h>

int main() {
    int integer = 5;
    float floating = 5.0;
    double double_num = 5.0000001;

    printf("Integer vs float comparisons:\n");
    printf("%d == %.1f: %d\n", integer, floating, integer == floating);
    printf("%d != %.1f: %d\n", integer, floating, integer != floating);

    printf("\nFloat vs Double comparisons:\n");
    printf("%.1f == %.7f: %d\n", floating, double_num, floating == double_num);
    printf("%.1f < %.7f: %d\n", floating, double_num, floating < double_num);

    // be careful with floating-point comparisons
    float a = 0.1 + 0.2;
    float b = 0.3;

    printf("\nFloating-point precision issue:\n");
    printf("a = %.20f\n", a);
    printf("b = %.20f\n", b);
    printf("a == b: %d\n", a == b);  // might be 0 due to precision!

    return 0;
}