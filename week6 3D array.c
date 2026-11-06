/*
Name: Daisy Watetu
Reg No: CT100/G/30745/26
Date: 30/10/2026
Description: Hotel chain with 3 branches using 3D array
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int b, f, r;
    int totalOccupied = 0;

    srand(time(0));

    // Assign random 0 or 1
    for(b = 0; b < 3; b++) {
        for(f = 0; f < 5; f++) {
            for(r = 0; r < 10; r++) {
                chain[b][f][r] = rand() % 2;
                if(chain[b][f][r] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    // Display
    printf("Total Occupied Rooms Across All Branches: %d\n", totalOccupied);
    printf("Total Rooms: %d\n", 3*5*10);
    printf("Total Vacant Rooms: %d\n", (3*5*10) - totalOccupied);

    printf(" My Total Occupied is: %d\n", totalOccupied);

    return 0;
}
