#include <stdio.h>

int main() {
    int score;

    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    printf("\nGrade Analysis:\n");
    printf("Perfect score (100): %d\n", score == 100);
    printf("Passing grade (>= 60): %d\n", score >= 60);
    printf("Failing grade (> 60): %d\n", score > 60);
    printf("Grade A (>= 90): %d\n", score >= 90);
    printf("Needs improvement (< 70): %d\n", score < 70);

    return 0;
}