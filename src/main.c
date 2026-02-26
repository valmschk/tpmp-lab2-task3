#include <stdio.h>
#include "interface.h"

int main() {
    int n = 3; // Для теста возьмем 3, в задании 10
    STUDENT students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter kurs: ");
        scanf("%d", &students[i].kurs);
        printf("Enter 5 grades: ");
        for (int j = 0; j < 5; j++) scanf("%d", &students[i].ses[j]);
    }

    sort_students(students, n);
    print_high_achievers(students, n);

    return 0;
}
