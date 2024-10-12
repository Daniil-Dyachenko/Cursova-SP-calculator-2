#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    std::cout << "10 + 5 = " << calc.Add(10, 5) << std::endl;
    std::cout << "10 - 5 = " << calc.Sub(10, 5) << std::endl;
    return 0;
}