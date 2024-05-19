#include <stdio.h>
#include "functions2.h"

void calculateAverage2(const struct Student *students, int numStudents, int numSubjects, int numTests) {
    for (int i = 0; i < numStudents; i++) {
        int total = 0;
        for (int s = 0; s < numSubjects; s++) {
            for (int t = 0; t < numTests; t++) {
                total += students[i].scores[s][t];
            }
        }
        float avg = total / (float)(numSubjects * numTests); 
        char grade;
        if (avg >= 90) {
            grade = 'S';
        } else if (avg >= 80) {
            grade = 'A';
        } else if (avg >= 70) {
            grade = 'B';
        } else if (avg >= 60) {
            grade = 'C';
        } else if (avg >= 50) {
            grade = 'D';
        } else if (avg >= 40) {
            grade = 'E';
        } else {
            grade = 'F';
        }
        printf("Student %d:\n Average=%.2f\t Grade=%c\n\n", students[i].rollno, avg, grade);
    }
}
