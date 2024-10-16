#ifndef INVESTMENTCALCULATOR_H
#define INVESTMENTCALCULATOR_H

#include <iostream>
#include <iomanip>
#include <memory>

class InvestmentCalculator {
private:
    double m_initialInvestment;
    double m_monthlyDeposit;
    double m_annualInterest;
    int m_numberOfYears;

public:
    // Constructor
    InvestmentCalculator();

    // Method to get user input
    void getUserInput();

    // Method to calculate year-end balance without monthly deposits
    void calculateWithoutDeposits() const;

    // Method to calculate year-end balance with monthly deposits
    void calculateWithDeposits() const;

    // Method to display the results
    void displayResults() const;
};

#endif 
