#include <stdio.h>

int main(){
    int x = 7, y = 2;

    printf("Integer division examples:\n");
    printf("%d / %d = %d\n", x, y, x / y);       // 7 /2 = 3
    printf("%d / %d = %d\n", 5, 2, 5 / 2);
    printf("%d / %d = %d\n", 9, 4, 9 / 4);

    printf("\nFloating-point division examples:\n");
    printf("%d / %d = %f\n", x, y, (float)x / y);       // 7.0 / 2 = 3.5
    printf("%d / %d = %f\n", 5, 2, 5.0 / 2);            // 5.0 / 2 = 2.5
    printf("%d / %d = %f\n", 9, 4, 9.0 / 4);            // 9.0 / 4 = 2.25

    return 0;
}