#include <stdio.h>
#include <stdlib.h>
#include "functions2.h"

void addStudentsFromFile(const char *filename, struct Student *students, int numStudents, int numSubjects, int numTests) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    for (int i = 0; i < numStudents; i++) {
        fscanf(file, "%d,%49[^,],%d,%d,%d,%d,%d,%d,%d,%d,%d",
               &students[i].rollno, students[i].name,
               &students[i].scores[0][0], &students[i].scores[0][1], &students[i].scores[0][2],
               &students[i].scores[1][0], &students[i].scores[1][1], &students[i].scores[1][2],
               &students[i].scores[2][0], &students[i].scores[2][1], &students[i].scores[2][2]);
    }

    fclose(file);
}

void searchStudentByRollNo(const struct Student *students, int numStudents, int rollno) {
    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollno == rollno) {
            printf("Student found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Scores:\n");
            for (int s = 0; s < NUM_SUBJECTS; s++) {
                for (int t = 0; t < NUM_TESTS; t++) {
                    printf("Subject %d, Test %d: %d\n", s + 1, t + 1, students[i].scores[s][t]);
                }
            }
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with roll number %d not found.\n", rollno);
    }
}
