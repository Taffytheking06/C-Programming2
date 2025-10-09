#include <stdio.h>

// Define permission flags
#define READ_PERMISSION     0b001 // 1
#define WRITE_PERMISSION    0b010 // 2
#define EXECUTE_PERMISSION  0b100 // 3

int main() {
    int user_permissions;

    printf("Enter user permission (0-7): ");
    scanf("%d", &user_permissions);

    // Check permissions using bitwise AND and logical operators
    int can_read = (user_permissions & READ_PERMISSION) != 0;
    int can_write = (user_permissions & WRITE_PERMISSION) != 0;
    int can_execute = (user_permissions & EXECUTE_PERMISSION) != 0;
    
    //Complex permission rules
    int can_edit = can_read && can_write;
    int can_run = can_read && can_execute;
    int can_manage = can_read && can_write && can_execute;
    int is_restricted = !can_read && !can_write && !can_execute;
    int has_some_access = can_read || can_write || can_execute;

    //Special combined permissions
    int can_read_only = can_read && !can_write && !can_execute;
    int can_read_write = can_read && can_write && !can_execute;
    int can_execute_only = !can_read && !can_write && can_execute;

    printf("\n=== PERMISSION ANALYSIS ===\n");
    printf("Read: %s\n", can_read? "YES" : "NO");
    printf("Write: %s\n", can_write ? "YES" : "NO");
    printf("Execute: %s\n", can_execute ? "YES" : "NO");

    printf("\n=== COMBINED PERMISSIONS ===\n");
    printf("Can edit files: %s\n", can_edit ? "YES" : "NO");
    printf("Can run programs: %s\n", can_run ? "YES" : "NO");
    printf("Can manage system: %s\n", can_manage ? "YES" : "NO");
    printf("Read-only access: %s\n", can_read_only ? "YES" : "NO");
    printf("Read-write access: %s\n", can_read_write ? "YES" : "NO");
    printf("Execute-only access: %s\n", can_execute_only ? "YES" : "NO");
    printf("Restricted user: %s\n", is_restricted ? "YES" : "NO");
    printf("Has some access: %s\n", has_some_access ? "YES" : "NO");

return 0;
}