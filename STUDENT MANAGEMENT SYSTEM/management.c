#include <stdio.h>

#define MAX 50


void markAttendance(int attendance[], int n) {
    int i;
    printf("\nEnter attendance (1 = Present, 0 = Absent):\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &attendance[i]);
    }
}

void displayAttendance(int attendance[], int n) {
    int i;
    printf("\nAttendance Record:\n");
    for (i = 0; i < n; i++) {
        if (attendance[i] == 1)
            printf("Student %d: Present\n", i + 1);
        else
            printf("Student %d: Absent\n", i + 1);
    }
}

void countAttendance(int attendance[], int n) {
    int i, present = 0, absent = 0;

    for (i = 0; i < n; i++) {
        if (attendance[i] == 1)
            present++;
        else
            absent++;
    }

    printf("\nTotal Present Students: %d", present);
    printf("\nTotal Absent Students: %d\n", absent);
}

int main() {
    int attendance[MAX];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    markAttendance(attendance, n);
    displayAttendance(attendance, n);
    countAttendance(attendance, n);

    return 0;
}
