/*
Name: Daisy Watetu
Reg No: CT100/G/30745/26
Date: 30/10/2026
Description: Weekly revenue tracker using 1D array
*/

#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0;
    int i;

    for(i = 0; i < 7; i++) {
        printf("Enter revenue for Day %d: ", i+1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    float average = total / 7;

    printf("\nTotal Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

    printf(" My Total is: %.2f\n", total);
    printf(" My Average is: %.2f\n", average);

    return 0;
}
