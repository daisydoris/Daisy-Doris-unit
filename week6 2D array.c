/*
Name: Daisy Watetu
Reg No: CT100/G/30745/26
Date: 30/10/2026
Description: Room occupancy for one branch using 2D array
*/

#include <stdio.h>

int main() {
    int occupancy[5][10];
    int i, j;
    int occupied, vacant;

    // Input occupancy
    for(i = 0; i < 5; i++) {
        printf("Enter occupancy for Floor %d (10 rooms 1=occupied 0=vacant):\n", i+1);
        for(j = 0; j < 10; j++) {
            printf(" Room %d: ", j+1);
            scanf("%d", &occupancy[i][j]);
        }
    }

    // Display per floor
    printf("\n--- Occupancy Report ---\n");
    for(i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;
        for(j = 0; j < 10; j++) {
            if(occupancy[i][j] == 1) occupied++;
            else vacant++;
        }
        printf("Floor %d: Occupied = %d, Vacant = %d\n", i+1, occupied, vacant);
    }

    return 0;
}
