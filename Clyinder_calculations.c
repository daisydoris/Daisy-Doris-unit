//Name Daisy
//Reg no CT100/G/30745/26

#include <stdio.h>

int main(){
    float radius, height, volume, surfaceArea;
    const float pi = 3.142;

    printf("What is the height of the cylinder(in centimeters)? \t");
    scanf("%f", &height);

    printf("What is the radius of the cylinder(in centimeters)? \t");
    scanf("%f", &radius);

    volume = pi * radius * radius * height;
    surfaceArea = (2 * pi * radius * radius) + (2 * pi * radius * height);

    printf("Radius =%.2f cm\n", radius);
    printf("Height =%.2f cm\n", height);
    printf("The volume of the cylinder is: %.2f cubic centimeters\n", volume);
    printf("The surface area of the cylinder is: %.2f square centimeters\n", surfaceArea);
    return 0;
}
