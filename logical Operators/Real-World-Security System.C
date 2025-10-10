#include <stdio.h>
#include <time.h>

int main(){
    int user_id = 0;
    int access_level = 1; 
    int login_attempts = 0;
    int has_2fa = 0;
    int is_work_hours = 0;
    int is_trusted_device = 0;

    printf("=== SECURITY ACCESS CONTROL ===\n");
    printf("Enter user ID: ");
    scanf("%d", &user_id);
    printf("Enter access level (1-5): ");
    scanf("%d", &access_level);
    printf("Enter login attempts: ");
    scanf("%d", &login_attempts);
    printf("Has 2FA? (0/1): ");
    scanf("%d", &has_2fa);
    printf("Is work hours? (0/1): ");
    scanf("%d", &is_work_hours);
    scanf("%d", &is_trusted_device);

    // Complex security rules
    int is_admin = (user_id == 1 || access_level == 5);
    int is_privileged_user = (access_level >= 3);
    int is_normal_user = (access_level >= 1);
    int suspicious_activity = (login_attempts > 3);
    int requires_elevated_auth = (suspicious_activity && !is_trusted_device) || (is_admin && !is_work_hours);

    // Access grant conditions
    int grant_full_access = is_admin && has_2fa && is_trusted_device;
    int grant_privileged_access = is_privileged_user && (has_2fa || (is_work_hours && is_trusted_device));
    int grant_normal_access = is_normal_user && (!suspicious_activity || has_2fa);
    int grant_emergency_access = is_admin && !has_2fa && is_work_hours;
    int grant_restricted_access = is_normal_user && suspicious_activity && has_2fa;

    //Denial conditions
    int deny_all_access = (login_attempts > 5) || (!is_normal_user) || (suspicious_activity && !has_2fa && !is_trusted_device);

    printf("\n=== SECURITY ASSESSMENT ===\n");
    printf("Admin user: %s\n", is_admin ? "YES" : "NO");
    printf("Privileged user: %s\n", is_privileged_user ? "YES" : "NO");
    printf("Suspicious activity: %s\n", suspicious_activity ? "YES" : "NO");
    printf("Elevated auth required: %s\n", requires_elevated_auth ? "YES" : "NO");

    printf("\n=== ACCESS DECISION ===\n");
    if (deny_all_access){
        printf("ACCESS DENIED - Security violation");
    } else if (grant_full_access) {
        printf("FULL ACCESS GRANTED\n");
    } else if(grant_privileged_access){
        printf("PRIVILEGED ACCESS GRANTED\n");
    } else if(grant_emergency_access){
        printf("EMERGENCY ACCESS GRANTED (Limited time)\n");
    } else if(grant_restricted_access){
        printf("RESTRICTED ACCESS GRANTED (Monitoring enabled)\n");
    } else if(grant_normal_access){
        printf("NORMAL ACCESS GRANTED\n");
    }else{
        printf("ACCESS DENIED - insufficient credential\n");
    }
    return 0;
}
