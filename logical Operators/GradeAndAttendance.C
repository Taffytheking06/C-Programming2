#include <stdio.h>

int main(){
    int score, attendance;

    printf("Enter test score (0-100): ");
    scanf("%d", &score);
    printf("Enter attendance percentage (0-100): ");
    scanf("%d", &attendance);

    printf("\nAcademic Status:\n");

    //Pass if score >= 60 and attendance >= 75
    int can_pass = (score >= 60 && attendance >= 75);
    printf("Can pass course: %d\n", can_pass);

    //Fail if score < 50 Or attendance < 60
    int will_fail = (score < 50 || attendance < 60);
    printf("Will fail course: %d\n", will_fail);

    //Honor roll: score >= 90 and attendance >= 90
    int honor_roll = (score >= 90 && attendance >= 90);
    printf("Honor roll: %d\n", honor_roll);

    //Needs improvement: NOT (good score OR good attendance)
    int needs_help = !(score >= 70 || attendance >= 70);
    printf("Needs improvement: %d\n", needs_help);
    return 0;
}