#include <stdio.h>

int main() {
    int timer = 10;

    printf("Countdown:\n");
    while (timer > 0) {
        printf("%d... ", timer);
        timer--;
    }

    printf("Liftoff!\n");
    return 0;
}