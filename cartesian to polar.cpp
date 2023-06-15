/* 4.	Coordinate System Conversion - Cartesian to Polar:
Write a program that takes two float inputs (x, y) representing the Cartesian coordinates of a 	point in a 2D plane. The program should convert these coordinates to polar coordinates (r, ?) 	and output the radius (r) and angle (?) in degrees.
Formulas:
a.	Radius: r = sqrt(x^2 + y^2)
b.	Angle: ? = atan2(y, x) * (180 / PI)
Note: You will need to use the sqrt(), atan2(), and other functions from the math.h library. Also, 	be sure to handle different quadrants and edge cases properly. */

#include <stdio.h>

#include <math.h>

#define PI 3.14159265359

int main() {
    float x, y, r, theta;

    printf("Enter the Cartesian coordinates (x, y): ");
    scanf("%f %f", &x, &y);

    // Calculate the radius and angle in radians
    r = sqrt(pow(x, 2) + pow(y, 2));
    theta = atan2(y, x);

    // Convert the angle to degrees
    theta *= 180 / PI;

    // Output the polar coordinates
    printf("The polar coordinates are: (%.2f, %.2f degrees)\n", r, theta);

    return 0;
}
