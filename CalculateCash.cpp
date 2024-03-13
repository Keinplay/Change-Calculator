#include "CalculateCash.h"
#include <iostream>

using namespace std;

ChangeCalculator::ChangeCalculator(): quarters(0), dimes(0), nickels(0), pennies(0) {}

void ChangeCalculator::calculateChange(int cents) {
    quarters = cents / 25;
    cents %= 25;

    dimes = cents / 10;
    cents %= 10;

    nickels = cents / 5;
    cents %= 5;

    pennies = cents;
}

void ChangeCalculator::displayChange() {
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
}