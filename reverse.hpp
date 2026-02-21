#ifndef REVERSE_HPP
#define REVERSE_HPP

#include <iostream>
#include <string>


// reverse_array
// Purpose:
//   Reverses the array in-place using two-index approach.
//
// Why NOT const?
//   Because we MODIFY the array by swapping elements.
//
// Method:
//   i starts at beginning
//   j starts at end
//   swap while i < j

template <typename T>
void reverse_array(T* arr, int n) {
    // i points to the start of the array
    int i = 0;

    // j points to the end of the array
    int j = n - 1;

    // Continue until the two indices meet
    while (i < j) {
        // ----- swap arr[i] and arr[j] -----

        // Save left value temporarily
        T temp = arr[i];

        // Move right value to left position
        arr[i] = arr[j];

        // Move saved left value to right position
        arr[j] = temp;

        // Move both indices toward the center
        i++;
        j--;
    }
}


// print_array
// Purpose:
//   Prints array contents in format: [a, b, c]
//
// Why const?
//   Because we ONLY read the array and do not modify it.

template <typename T>
void print_array(const T* arr, int n) {
    std::cout << "[";

    // Loop through each element in the array
    for (int i = 0; i < n; i++) {
        std::cout << arr[i];

        // Print comma and space except after last element
        if (i < n - 1) {
            std::cout << ", ";
        }
    }

    std::cout << "]\n";
}

#endif