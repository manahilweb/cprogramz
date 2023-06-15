/*Write a C program to implement a binary search algorithm. The program should prompt the user to enter a sorted list of integers and a target integer to search for. The program should then use the binary search algorithm to search for the target integer and print the result. The program should continue to prompt the user until the user enters 'q' to quit, using a do-while loop.*/

#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int low = 0, high = size - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[100], size, target, result;

    do {
        printf("Enter the size of the list of integers (max 100) or 'q' to quit:\n");
        if (scanf("%d", &size) != 1) {
            printf("Exiting binary search.\n");
            return 0;
        }

        if (size <= 0 || size > 100) {
            printf("Error: Invalid size. Please enter a size between 1 and 100.\n");
            continue;
        }

        printf("Enter a sorted list of %d integers:\n", size);
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }

        printf("Enter a target integer to search for:\n");
        scanf("%d", &target);

        result = binary_search(arr, size, target);

        if (result == -1) {
            printf("%d was not found in the list.\n", target);
        } else {
            printf("%d was found at position %d in the list.\n", target, result + 1);
        }
    } while (1);

    return 0;
}

