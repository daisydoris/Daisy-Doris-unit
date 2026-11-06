//Name Daisy
//Reg no CT100/30745/G/26
#include <stdio.h>

int main() {
    int age;//%d
    double annualincome;//%lf

    printf("What is your age?: ");
    scanf("%d", &age);

    printf(" what is your annual income(in kenya shillings)?: ");
    scanf("%lf", &annualincome);

    if(age >= 21 && annualincome >= 21000) {
        printf(" Congratulations you qualify for a loan.\n");
    } else {
        printf(" Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
