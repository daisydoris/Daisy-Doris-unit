/*
Name: Daisy Watetu
Reg No: CT100/G/30745/26
Date: 15/10/2026
Description: Calculates fare based on distance
*/

#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50;
}

int main() {
    float distance, fare;
    printf("Enter distance traveled (km): ");
    scanf("%f", &distance);

    fare = calculateFare(distance);

    printf("Total fare is: %.2f KSh\n", fare);
    printf(" My Distance is: %.2f km\n", distance);
    printf(" My Fare is: %.2f KSh\n", fare);
    return 0;
}
