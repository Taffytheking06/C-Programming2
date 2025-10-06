#include <stdio.h>

int main() {
    int x = 5;

    //Wrong: this assigns 10 to x, then checks if 10 is true (always true)

    if (x = 10){
        printf("This will always execute! x is now %d\n", x);
    }

    // Correct: this compares x with 10
    if (x == 10) {
        printf("This may or may not execute\n");
    }else{
        printf("x is not 10, it is %d\n", x);    
    }
    return 0;
}
