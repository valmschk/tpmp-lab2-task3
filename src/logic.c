#include <stdio.h>
#include <string.h>
#include "interface.h"

void sort_students(STUDENT *students, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(students[j].name, students[j+1].name) > 0) {
                STUDENT temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

void print_high_achievers(STUDENT *students, int n) {
    double total_sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) total_sum += students[i].ses[j];
    }
    double overall_avg = total_sum / (n * 5);

    printf("\nOverall average: %.2f\n", overall_avg);
    for (int i = 0; i < n; i++) {
        double s_avg = 0;
        for (int j = 0; j < 5; j++) s_avg += students[i].ses[j];
        if ((s_avg / 5) > overall_avg) {
            printf("Above average student: %s\n", students[i].name);
        }
    }
}
