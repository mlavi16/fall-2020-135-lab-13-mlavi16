#include <iostream>
#include <string>
#include "recursion.h"

std::string printRange(int left, int right) {
    //return all numbers in range left ≤ x ≤ right, separated by spaces
    std::string range;
    return returnRange(left, right, range);
}

std::string returnRange(int left, int right, std::string range) {
    if (left <= right) {
        range += std::to_string(left) + " ";
        range = returnRange(left + 1, right, range);
    }
    return range;
}

// void printRange(int left, int right) {
//     if (left <= right) {
//         std::cout << left << std::endl;
//         printRange(left + 1, right);
//     }
// }

