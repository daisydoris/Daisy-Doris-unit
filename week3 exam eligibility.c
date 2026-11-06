/*
Name: Daisy Watetu
Reg No: CT100/G/30745/26
Date: 15/10/2026
Description: Checks if student is eligible for exams based on attendance and marks.
*/

#include <stdio.h>

int main() {
    float attendance;
    float marks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &marks);

    if(attendance >= 75 && marks >= 40) {
        printf("Eligible\n");
    } else {
        printf("Not eligible\n");
    }

    printf(" My Attendance is: %.2f%%\n", attendance);
    printf(" My Average Marks is: %.2f\n", marks);

    return 0;
}
