#include <stdio.h>

int main() {
    int score;

    printf("Enter student's score (0-100): ");
    scanf("%d", &score);

    if (score >= 70 && score <= 100) {
        printf("Grade: A\n");
    } 
    else if (score >= 60) {
        printf("Grade: B\n");
    } 
    else if (score >= 50) {
        printf("Grade: C\n");
    } 
    else if (score >= 40) {
        printf("Grade: D\n");
    } 
    else if (score >= 0) {
        printf("Grade: E\n");
    } 
    else {
        printf("Invalid score!\n");
    }

    return 0;
}
