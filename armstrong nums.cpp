/*Write a program that generates and prints all the Armstrong numbers between 1 and 500, where an Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits. For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, sum, digit, temp, n;
    
    printf("Armstrong numbers between 1 and 500 are: ");
    
    for (num = 1; num <= 500; num++) {
        n = 0;
        sum = 0;
        temp = num;
        
        // Count number of digits
        while (temp != 0) {
            n++;
            temp /= 10;
        }
        
        temp = num;
        
        // Calculate sum of digits raised to n
        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, n);
            temp /= 10;
        }
        
        // Check if number is Armstrong number
        if (num == sum) {
            printf("%d ", num);
        }
    }
    
    return 0;
}

