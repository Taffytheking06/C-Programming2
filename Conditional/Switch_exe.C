#include <stdio.h>

int main() {
    int choice;
    printf("----Cafeteria Menu----\n");
    printf("1. Coffee\n");
    printf("2. Tea\n");
    printf("3. Sandwitch\n");
    printf("4. Juice\n");
    printf("Enter a choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You selected coffee. Price = Rs. 40\n");
            break;
        case 2: 
            printf("You selected Tea. Price = R.s 20\n");
            break;
        case 3:
            printf("You selected Sandwitch. Price = R.s 60\n");
            break;
        case 4:
            printf("You selected Juice. Price = R.s 50");
            break;
        default:
            printf("Invalid choice! Please select from menu.\n");            
    }
    return 0;
}