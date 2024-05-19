#include <stdio.h>
#include "functions2.h"

void displayStudents2(const struct Student *students, int numStudents) {
    printf("Student details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Scores:\n");
        for (int s = 0; s < NUM_SUBJECTS; s++) {
            for (int t = 0; t < NUM_TESTS; t++) {
                printf("Subject %d, Test %d: %d\n", s + 1, t + 1, students[i].scores[s][t]);
            }
        }
        printf("\n");
    }
}
