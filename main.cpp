#include "InvestmentCalculator.h"
#include <iostream>

int main() {
    try {
        std::unique_ptr<InvestmentCalculator> calculator = std::make_unique<InvestmentCalculator>();

        calculator->getUserInput();
        calculator->displayResults();
    }
    catch (const std::exception& e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}