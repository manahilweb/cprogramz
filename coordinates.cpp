/* 2.	Calculate the distance between two points in a 2D plane: Write a program that takes four float inputs (x1, y1, x2, y2) representing the coordinates of two points (P1 and P2) in a 2D plane. The program should calculate and output the Euclidean distance between these two points.
Formula: distance = sqrt((x2 - x1)^2 + (y2 - y1)^2)
Note: You will need to use the sqrt() function from the math.h library. */

#include <stdio.h>
#include <math.h>

int main() 
{
    float x1, y1, x2, y2, distance;
    
    printf("Enter coordinates of point 1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    
    printf("Enter coordinates of point 2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    
    printf("The distance between (%.2f, %.2f) and (%.2f, %.2f) is %.2f\n", x1, y1, x2, y2, distance);
    
    return 0;
}
