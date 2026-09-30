//Name Daisy
//Reg no CT100/30745/G/26
#include <stdio.h>

int main() {
    float height;//%f
    double bankbalance;//%lf
    char phonenumber[15];//%s

    printf("What is your height (in metres)?: ");
    scanf("%f", &height);

    printf(" what is  your bank balance(in kenya shillings)?: ");
    scanf("%lf", &bankbalance);

    printf("what is your phone number? : ");
    scanf("%s", phonenumber);

    printf(" My Height is: %.2f m\n", height);
    printf(" My Bank Balance is: %.2lf Ksh\n", bankbalance);
    printf(" My Phone Number is: %s\n", phonenumber);

    return 0;
}
