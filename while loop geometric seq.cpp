/*Write a program using a while loop to print the first 10 terms of the geometric sequence with first term 1 and common ratio 2.*/

#include <stdio.h>

int main() {
    int i = 1;
    double term = 1;  // Declare the first term as 1 and set it as the initial value of the sequence.
    
    printf("The first 10 terms of the geometric sequence with first term 1 and common ratio 2 are:\n");
    
    while (i <= 10) {
        printf("%d: %lf\n", i, term);
        term *= 2;  // Multiply the current term by the common ratio to get the next term.
        i++;        // Increment the loop counter.
    }
    
    return 0;
}

