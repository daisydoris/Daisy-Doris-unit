/*
Name: Daisy Watetu
Reg No: CT100/G/30745/26
Date: 15/10/2026
Description: Calculates water bill based on units consumed using if-else.
*/

#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter water units consumed: ");
    scanf("%d", &units);

    if(units <= 30) {
        bill = units * 20;
    } else if(units <= 60) {
        bill = 30*20 + (units-30)*25;
    } else {
        bill = 30*20 + 30*25 + (units-60)*30;
    }

    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}
