/*
Name: Daisy Watetu
Reg No: CT100/G/30745/26
Date: 15/10/2026
Description: Displays data bundle menu and shows selected bundle using switch.
*/

#include <stdio.h>

int main() {
    int choice;

    printf("Option\tBundle\tCost (KES)\n");
    printf("1\t100 MB\t50\n");
    printf("2\t500 MB\t200\n");
    printf("3\t1 GB\t350\n");
    printf("4\t2 GB\t600\n");

    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You selected 100 MB - Cost: 50 KES\n");
            break;
        case 2:
            printf("You selected 500 MB - Cost: 200 KES\n");
            break;
        case 3:
            printf("You selected 1 GB - Cost: 350 KES\n");
            break;
        case 4:
            printf("You selected 2 GB - Cost: 600 KES\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    printf(" My Choice is: %d\n", choice);

    return 0;
}
