/*
Name: Daisy Watetu
Reg No: CT100/G/30745/26
Date: 25/10/2026
Description: Password system that keeps asking until correct password 1234 is entered.
*/

#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if(password != 1234) {
            printf("Wrong password, try again\n");
        }

    } while(password != 1234);

    printf("Access Granted\n");

    return 0;
}
