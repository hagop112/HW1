#include <stdio.h>

// determining the letter grades with their ranges
char getLetterGrade(int grade) {
    switch (grade / 10) {  // Integer division to group grades
        case 10: return 'A'; // Grade 100
        case 9: return 'A';  // Grades 90-99
        case 8: return 'B';  // Grades 80-89
        case 7: return 'C';  // Grades 70-79
        case 6: return 'D';  // Grades 60-69
        default: return 'F'; // Grades below 60
    }
}

int main() {
    int grade;

    printf("Enter your grade: "); 
    scanf("%d", &grade); //input for numerical grade

    if (grade < 0 || grade > 100) { 
        printf("Don't play dumb, put your real grade"); // Error message for invalid input also having fun while coding
    } else {
        printf("Your letter grade is: %c", getLetterGrade(grade)); // Output the corresponding letter grade
    }   

    return 0;
}
