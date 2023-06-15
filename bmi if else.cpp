/*1.	Body Mass Index (BMI) Calculator and Category: Write a program that takes two float inputs, weight (in kilograms) and height (in feet and inches), and calculates the BMI (Body Mass Index) of a person. The program should then output the BMI value and the BMI category according to the following classifications:
"	Underweight: BMI < 18.5
"	Normal weight: 18.5 <= BMI < 24.9
"	Overweight: 24.9 <= BMI < 29.9
"	Obesity (Class 1): 29.9 <= BMI < 34.9
"	Obesity (Class 2): 34.9 <= BMI < 39.9
"	Extreme obesity (Class 3): BMI >= 39.9
BMI Formula: weight (kg) / [height (m)]2
1 meter = 39.37 inches. */

#include <stdio.h>
#include <math.h>

int main() {
    float weight, height_feet, height_inches, height_meters, height_inches_total, bmi;
    
    // Prompt user for input
    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter height in feet and inches (separated by a space): ");
    scanf("%f %f", &height_feet, &height_inches);
    
    // Convert height to meters
     height_inches_total = (height_feet * 12) + height_inches;
    height_meters = height_inches_total / 39.37;
    
    // Calculate BMI
    bmi = weight / pow(height_meters, 2);
    
    // Print BMI and category
    printf("BMI: %f\n", bmi);
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi < 24.9) {
        printf("Category: Normal weight\n");
    } else if (bmi < 29.9) {
        printf("Category: Overweight\n");
    } else if (bmi < 34.9) {
        printf("Category: Obesity (Class 1)\n");
    } else if (bmi < 39.9) {
        printf("Category: Obesity (Class 2)\n");
    } else {
        printf("Category: Extreme obesity (Class 3)\n");
    }
    
    return 0;
}
