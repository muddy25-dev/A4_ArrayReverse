#include <iostream>
#include <string>
#include "reverse.hpp"


// Helper function to compare two arrays
// Returns true if arrays are identical

template <typename T>
bool arrays_equal(const T* a, const T* b, int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {

    
    // Test 1: int array
    
    {
        int arr[]{1,2,3,4};
        int expected[]{4,3,2,1};
        int n = sizeof(arr)/sizeof(arr[0]);

        reverse_array<int>(arr, n);

        std::cout << "int test: "
                  << (arrays_equal(arr, expected, n) ? "PASS" : "FAIL")
                  << "\n";
    }

   
    // Test 2: double array
   
    {
        double arr[]{1.5,2.5,3.5,4.5};
        double expected[]{4.5,3.5,2.5,1.5};
        int n = sizeof(arr)/sizeof(arr[0]);

        reverse_array<double>(arr, n);

        std::cout << "double test: "
                  << (arrays_equal(arr, expected, n) ? "PASS" : "FAIL")
                  << "\n";
    }

    
    // Test 3: char array
    
    {
        char arr[]{'A','B','C','D'};
        char expected[]{'D','C','B','A'};
        int n = sizeof(arr)/sizeof(arr[0]);

        reverse_array<char>(arr, n);

        std::cout << "char test: "
                  << (arrays_equal(arr, expected, n) ? "PASS" : "FAIL")
                  << "\n";
    }

   
    // Test 4: std::string array
   
    {
        std::string arr[]{"one","two","three"};
        std::string expected[]{"three","two","one"};
        int n = sizeof(arr)/sizeof(arr[0]);

        reverse_array<std::string>(arr, n);

        std::cout << "string test: "
                  << (arrays_equal(arr, expected, n) ? "PASS" : "FAIL")
                  << "\n";
    }

    return 0;
}