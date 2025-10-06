#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Add your code here to check 
    //1. If a number is positive and even
    if ((num > 0) && (num % 2 == 0)){
        printf("%d is positive and even\n", num);

        
    //2. if a number is divisble by 3 or 5
    if (num % 3 == 0 || num % 5 == 0){
        printf("%d is divisible by 3 or 5\n", num);
    }else{
        printf("%d is not divisible by 3 or 5\n", num);
    }

    //3. if a number is a single digit (0-9)
    if (num >= 0 && num <= 9){
        printf("%d is a single digit number\n", num);
    }else{
        printf("%d is not a single digit number\n", num);
    }
}
return 0;
}