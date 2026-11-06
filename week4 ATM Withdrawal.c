/*
Name: Daisy Watetu
Reg No: CT100/G/30745/26
Date: 25/10/2026
Description: ATM withdrawal simulation using while loop until balance is zero.
*/

#include <stdio.h>

int main() {
    float balance, withdraw;

    printf("Enter account balance: ");
    scanf("%f", &balance);

    while(balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance = balance - withdraw;

        if(balance < 0) {
            printf("Insufficient funds. Withdrawal not allowed? balance is %.2f\n", balance);
            break;
        }

        printf("Remaining balance: %.2f\n", balance);

        if(balance <= 0) {
            printf("Balance is zero. No more withdrawals.\n");
        }
    }

    return 0;
}
