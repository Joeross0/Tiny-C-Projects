#pragma once

#include <iostream>
#include <string>
#include <array>

class Calculator {
private:
    const std::array<std::string, 4> arr = { "Add", "Subtract", "Multiply", "Divide" };

public:
    double lastValue = 0;

    Calculator();
};
