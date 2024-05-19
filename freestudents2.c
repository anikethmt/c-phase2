#include <stdlib.h>
#include "functions2.h"

void freeStudents2(struct Student *students, int numStudents) {
    free(students);
}
