#include <iostream>
#include <string>
#include "recursion.h"

// void printRange(int left, int right) {
//     if (left <= right) {
//         std::cout << left << std::endl;
//         printRange(left + 1, right);
//     }
// }

std::string returnRange(int left, int right) {
    // Returns all numbers in range left ≤ x ≤ right, separated by spaces
    std::string range = "";
    if (left > right) {
        return range;
    } else {
        range += returnRange(left + 1, right);
        return std::to_string(left) + " " + range;
    }
}

int sumRange(int left, int right) {
    // Computes the sum of all numbers in range left ≤ x ≤ right
    int range = 0;
    if (left > right) {
        return 0;
    } else {
        range += sumRange(left + 1, right);
        return range + left;
    }
}

int sumArray(int *arr, int size) {
    // Returns the sum of the array's elements
    return 0;
}