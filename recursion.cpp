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
    return sumArrayInRange(arr, 0, size - 1);
}

int sumArrayInRange(int *arr, int left, int right) {
    // sumArray helper function
    int sum = 0;
    if (left <= right) {
        sum += sumArrayInRange(arr, left + 1, right);
        return sum + arr[left];
    } else {
        return 0;
    }
}

bool isAlphanumeric(std::string s) {
    // returns true if all characters in the string are letters and digits, otherwise returns false.
    if (s.empty()) {
        return true;
    } else {
        if (!isalnum(s[0])) {
            return false;
        }
        s = s.substr(1, s.length() - 1);
        return isAlphanumeric(s);
    }
}

bool nestedParens(std::string s) {
    // Returns true if the string is empty or a sequence of nested parentheses.
    // Any other symbols or mismatching parenthesis should make the function return false.
    if (s.empty()) {
        return true;
    } else {
        if (s[0] == '(' && s[s.length()-1] == ')') {
            s = s.substr(1, s.length()-2);
            return nestedParens(s);
        } else {
            return false;
        }
    }
}
