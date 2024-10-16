#include "InvestmentCalculator.h"

InvestmentCalculator::InvestmentCalculator() 
    : m_initialInvestment(0), m_monthlyDeposit(0), m_annualInterest(0), m_numberOfYears(0) {}

void InvestmentCalculator::getUserInput() {
    std::cout << "************************************************\n";
    try {
        std::cout << "Enter Initial Investment Amount: ";
        std::cin >> m_initialInvestment;
        if (m_initialInvestment < 0) throw std::invalid_argument("Initial investment must be a positive number.");

        std::cout << "Enter Monthly Deposit: ";
        std::cin >> m_monthlyDeposit;
        if (m_monthlyDeposit < 0) throw std::invalid_argument("Monthly deposit must be a positive number.");

        std::cout << "Enter Annual Interest Rate (%): ";
        std::cin >> m_annualInterest;
        if (m_annualInterest < 0) throw std::invalid_argument("Annual interest rate must be positive.");

        std::cout << "Enter Number of Years: ";
        std::cin >> m_numberOfYears;
        if (m_numberOfYears <= 0) throw std::invalid_argument("Number of years must be greater than zero.");

        std::cout << "************************************************\n\n";
    }
    catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        exit(EXIT_FAILURE);
    }
}

void InvestmentCalculator::calculateWithoutDeposits() const {
    double balance = m_initialInvestment;
    double interestEarned;

    std::cout << "\n***********************************************\n";
    std::cout << "** Year-End Balance Without Monthly Deposits **\n";
    std::cout << "Year\tYear-End Balance\tYear-End Earned Interest\n";
    for (int i = 1; i <= m_numberOfYears; i++) {
        interestEarned = balance * (m_annualInterest / 100);
        balance += interestEarned;
        std::cout << i << "\t\t$" << balance 
                  << "   \t\t\t$" << interestEarned << std::endl;
    }
    std::cout << "***********************************************\n";
}

void InvestmentCalculator::calculateWithDeposits() const {
    double balance = m_initialInvestment;
    double interestEarned;

    std::cout << "\n*********************************************\n";
    std::cout << "** Year-End Balance With Monthly Deposits: **\n";
    std::cout << "Year\tYear-End Balance\tYear-End Earned Interest\n";
    for (int i = 1; i <= m_numberOfYears; i++) {
        double annualInterestEarned = 0;
        for (int month = 1; month <= 12; month++) {
            balance += m_monthlyDeposit;
            interestEarned = balance * (m_annualInterest / 100) / 12;
            balance += interestEarned;
            annualInterestEarned += interestEarned;
        }
        std::cout << i << "\t\t$" << balance 
                  << "\t\t\t$" << annualInterestEarned << std::endl;
    }
    std::cout << "*********************************************\n";
}

void InvestmentCalculator::displayResults() const {
    calculateWithoutDeposits();
    calculateWithDeposits();
}
