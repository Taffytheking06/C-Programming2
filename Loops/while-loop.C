#include <stdio.h>

int main(){
    int count = 1;

    while (count <= 5) {
        printf("Count: %d\n", count);
        count++;    //updating the counter
    }

    printf("Loop finished!\n");
    return 0;
}