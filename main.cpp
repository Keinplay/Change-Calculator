#include <iostream>
#include "CalculateCash.h"
using namespace std;

// void getCents(no arguments) return
// get int
// while loop
// calculateQuarters
// calculateDimes
// calculateNickels
// calculatePennies


int main() {
    int cents;
    do {
        cout << "Enter cents owed: ";
        cin >> cents;
        if(cents < 0){
            cout << "Please enter a positive amount." << endl;
        }
    } while(cents < 0);

    ChangeCalculator calc;
    calc.calculateChange(cents);
    calc.displayChange();

    return 0;
}
