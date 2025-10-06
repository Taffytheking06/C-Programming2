#include <stdio.h>

int main() {
    int correct_password = 1234;
    int entered_password;

    printf("Enter password: ");
    scanf("%d", &entered_password);

      // First check if password is valid length
    if (entered_password < 1000 || entered_password > 9999) {
        printf("Invalid password! Must be between 1000 and 9999 (4 digits)\n");
    } 

    // Add code to check if password is correct
    else if (entered_password == correct_password){
        printf("Access granted\n");
    }else{
        printf("Wrong Password!! Access denied\n");
    }
    return 0;
}