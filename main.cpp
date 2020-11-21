/*
Author: Maya Lavi
Course: CSCI-135
Instructor: Zamansky
Assignment: Lab 13
*/

#include <iostream>
#include "recursion.h"

int main() {
    // std::cout << returnRange(-2, 10) << std::endl;
    // std::cout << sumRange(-2, 10) << std::endl;

    // int size = 10;
    // int *arr = new int[size]; // allocate array dynamically
    // arr[0] = 12;
    // arr[1] = 17;
    // arr[2] = -5;
    // arr[3] = 3;
    // arr[4] = 7;
    // arr[5] = -15;
    // arr[6] = 27;
    // arr[7] = 5;
    // arr[8] = 13;
    // arr[9] = -21;
    // int sum1 = sumArray(arr, size); // Add all elements
    // std::cout << "Sum is " << sum1 << std::endl;  // Sum is 43
    // int sum2 = sumArray(arr, 5); // Add up first five elements
    // std::cout << "Sum is " << sum2 << std::endl;  // Sum is 34
    // delete[] arr;         // deallocate it

    // std::cout << isAlphanumeric("ABCD") << std::endl;        // true (1)
    // std::cout << isAlphanumeric("Abcd1234xyz") << std::endl; // true (1)
    // std::cout << isAlphanumeric("KLMN 8-7-6") << std::endl;  // false (0)

    std::cout << nestedParens("((()))") << " == 1" << std::endl;      // true (1)
    std::cout << nestedParens("()") << " == 1" << std::endl;          // true (1)
    std::cout << nestedParens("") << " == 1" << std::endl;            // true (1)

    std::cout << nestedParens("(((") << " == 0" << std::endl;         // false (0)
    std::cout << nestedParens("(()") << " == 0" << std::endl;         // false (0)
    std::cout << nestedParens(")(") << " == 0" << std::endl;          // false (0)
    std::cout << nestedParens("a(b)c") << " == 0" << std::endl;       // false (0)

}
