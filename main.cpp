#include <iostream>
#include <string>
#include <cstring>   // for strlen
#include "reverse.hpp"

int main() {

    
    // int array test
  
    int ai[]{1, 2, 3, 4};

    // Compute number of elements in array
    int ni = sizeof(ai) / sizeof(ai[0]);

    std::cout << "ai: ";
    print_array<int>(ai, ni);

    // Reverse in-place
    reverse_array<int>(ai, ni);

    std::cout << "ai: ";
    print_array<int>(ai, ni);


    
    // double array test
    
    double ad[] = {1.5, 2.5, 3.5, 4.5};

    int nd = sizeof(ad) / sizeof(ad[0]);

    std::cout << "ad: ";
    print_array<double>(ad, nd);

    reverse_array<double>(ad, nd);

    std::cout << "ad: ";
    print_array<double>(ad, nd);


    
    // char array (NOT a C-string)
   
    char letters[] = {'E','C','E','3','5','1','4'};

    int nc = sizeof(letters) / sizeof(letters[0]);

    std::cout << "letters: ";
    print_array<char>(letters, nc);

    reverse_array<char>(letters, nc);

    std::cout << "letters: ";
    print_array<char>(letters, nc);


    
    // C-string (do NOT reverse the '\0')
    
    char word[] = "hello";

    std::cout << "cstr: " << word << "\n";

    // strlen gives number of characters BEFORE '\0'
    int nw = strlen(word);

    reverse_array<char>(word, nw);

    std::cout << "cstr: " << word << "\n";

    return 0;
}