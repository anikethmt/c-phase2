#include <stdio.h>
#include <stdlib.h>
#include "functions2.h"

int main() {
    int numStudents = 10;
    int numSubjects = 3;
    int numTests = 3;

    struct Student *students = malloc(numStudents * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    const char *filename = "students.csv";
    addStudentsFromFile(filename, students, numStudents, numSubjects, numTests);

    displayStudents2(students, numStudents);

    int rollno;
    printf("Enter roll number to search: ");
    scanf("%d", &rollno);
    searchStudentByRollNo(students, numStudents, rollno);

    calculateAverage2(students, numStudents, numSubjects, numTests);

    freeStudents2(students, numStudents);

    return 0;
}
