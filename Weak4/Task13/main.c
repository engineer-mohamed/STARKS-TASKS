#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_CLASSES 3
#define NUM_STUDENTS 10
#define PASSING_GRADE 50
#define TOTAL_GRADE 100

int main() {
    int classes[NUM_CLASSES][NUM_STUDENTS];
    int i, j;
    int passed = 0, failed = 0;
    int highest = 0, lowest = TOTAL_GRADE;
    float total = 0.0;

    srand(time(0));

    for (i = 0; i < NUM_CLASSES; i++) {
        for (j = 0; j < NUM_STUDENTS; j++) {
            classes[i][j] = rand() % (TOTAL_GRADE + 1);
        }
    }

    for (i = 0; i < NUM_CLASSES; i++) {
        for (j = 0; j < NUM_STUDENTS; j++) {
            int grade = classes[i][j];
            total += grade;

            if (grade >= PASSING_GRADE) {
                passed++;
            } else {
                failed++;
            }

            if (grade > highest) {
                highest = grade;
            }
            if (grade < lowest) {
                lowest = grade;
            }
        }
    }
    float average = total / (NUM_CLASSES * NUM_STUDENTS);
    printf("Number of passed students: %d\n", passed);
    printf("Number of failed students: %d\n", failed);
    printf("Highest grade: %d\n", highest);
    printf("Lowest grade: %d\n", lowest);
    printf("Average grade: %.2f\n", average);

    return 0;
}
