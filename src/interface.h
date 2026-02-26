#ifndef INTERFACE_H
#define INTERFACE_H

typedef struct {
    char name[50];
    int kurs;
    int ses[5];
} STUDENT;

void sort_students(STUDENT *students, int n);
void print_high_achievers(STUDENT *students, int n);

#endif
