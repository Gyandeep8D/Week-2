#include <stdio.h>

int main() {
    int MARKS[20][5];
    int i, j;
    float subject_avg[5] = {0};
    float student_avg[20] = {0};
    int count_below_50 = 0;

    // Input marks for 20 students and 5 subjects
    printf("Enter marks for 20 students in 5 subjects:\n");
    for (i = 0; i < 20; i++) {
        printf("Student %d:\n", i + 1);
        for (j = 0; j < 5; j++) {
            printf(" Subject %d: ", j + 1);
            scanf("%d", &MARKS[i][j]);
        }
    }

    // (a) Find average marks obtained in each subject
    for (j = 0; j < 5; j++) {
        int sum = 0;
        for (i = 0; i < 20; i++) {
            sum += MARKS[i][j];
        }
        subject_avg[j] = sum / 20.0;
    }

    // (b) Find average marks obtained by every student
    for (i = 0; i < 20; i++) {
        int sum = 0;
        for (j = 0; j < 5; j++) {
            sum += MARKS[i][j];
        }
        student_avg[i] = sum / 5.0;
    }

    // (c) Find number of students who scored below 50 in their average
    for (i = 0; i < 20; i++) {
        if (student_avg[i] < 50) {
            count_below_50++;
        }
    }

    // (d) Display the scores obtained by every student
    printf("\nScores of every student:\n");
    for (i = 0; i < 20; i++) {
        printf("Student %d: ", i + 1);
        for (j = 0; j < 5; j++) {
            printf("%d ", MARKS[i][j]);
        }
        printf("\n");
    }

    // Display results
    printf("\nAverage marks in each subject:\n");
    for (j = 0; j < 5; j++) {
        printf("Subject %d: %.2f\n", j + 1, subject_avg[j]);
    }

    printf("\nAverage marks of each student:\n");
    for (i = 0; i < 20; i++) {
        printf("Student %d: %.2f\n", i + 1, student_avg[i]);
    }

    printf("\nNumber of students scoring below 50 in average: %d\n", count_below_50);

    return 0;
}

