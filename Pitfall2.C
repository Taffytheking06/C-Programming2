#include <stdio.h>

int main() {
    int x = 5;

    //Wrong: This doesn't mean "x between 1 and 10" like in math
    //printf("1 < x < 10: %d\n", 1 < x < 10); //Always true!

    //Correct: Use logical AND
    printf("1 < x && x < 10: %d\n", (1 < x) && (x < 10));
return 0;
}
