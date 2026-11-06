/*
Name: Daisy Watetu
Reg No: CT100/G/30745/26
Date: 15/10/2026
Description: Calculates electric bill
*/

#include <stdio.h>

float calculateElectricBill(float units) {
    float bill = 0;
    if(units <= 100) {
        bill = units * 10;
    } else if(units <= 200) {
        bill = (100 * 10) + (units - 100) * 15;
    } else {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }
    return bill;
}

int main() {
    float units, bill;
    printf("Enter units consumed: ");
    scanf("%f", &units);

    bill = calculateElectricBill(units);

    printf("Total bill is: %.2f KSh\n", bill);
    printf(" My Units is: %.2f\n", units);
    printf(" My Bill is: %.2f KSh\n", bill);
    return 0;
}
