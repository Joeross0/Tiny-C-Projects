#include "Calculator.h"

Calculator::Calculator() {
    int length = arr.size();
    for (size_t i = 0; i < length; i++) {
        std::string item = arr[i];  // Access arr[i] instead of arr[0]
        std::cout << item << std::endl;  // Output each item
    }
}