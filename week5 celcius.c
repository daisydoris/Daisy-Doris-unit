/*
Name: Daisy Wattu
Reg No: CT100/G/30745/26
Date: 25/10/2026
Description: Converts Fahrenheit to Celsius
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = convertToCelsius(fahrenheit);

    printf("Temperature in Celsius is: %.2f\n", celsius);
    printf(" My Fahrenheit is: %.2f\n", fahrenheit);
    printf(" My Celsius is: %.2f\n", celsius);
    return 0;
}
