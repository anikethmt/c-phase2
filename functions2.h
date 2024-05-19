#ifndef FUNCTIONS2_H
#define FUNCTIONS2_H

#define MAX_NAME_LENGTH 50
#define NUM_SUBJECTS 3
#define NUM_TESTS 3

struct Student {
    int rollno;
    char name[MAX_NAME_LENGTH];
    int scores[NUM_SUBJECTS][NUM_TESTS];
};

void addStudentsFromFile(const char *filename, struct Student *students, int numStudents, int numSubjects, int numTests);
void displayStudents2(const struct Student *students, int numStudents);
void calculateAverage2(const struct Student *students, int numStudents, int numSubjects, int numTests);
void freeStudents2(struct Student *students, int numStudents);
void searchStudentByRollNo(const struct Student *students, int numStudents, int rollno);

#endif /* FUNCTIONS2_H */
