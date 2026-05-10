#include <iostream>
using namespace std;
void showMenu() {
    cout << "\n====== Currency Converter ======" << endl;
    cout << "1. USD to INR" << endl;
    cout << "2. INR to USD" << endl;
    cout << "3. USD to EUR" << endl;
    cout << "4. EUR to USD" << endl;
    cout << "5. GBP to INR" << endl;
    cout << "6. INR to GBP" << endl;
    cout << "0. Exit" << endl;
    cout << "================================" << endl;
    cout << "Enter choice: ";
}
int main() {
    const double USD_INR = 83.5;
    const double EUR_USD = 1.08;
    const double GBP_INR = 106.0;
    int choice;
    double amount, result;
    do {
        showMenu();
        cin >> choice;
        if (choice == 0) { cout << "Exiting..." << endl; break; }
        cout << "Enter amount: ";
        cin >> amount;
        switch (choice) {
            case 1: result = amount * USD_INR; cout << amount << " USD = " << result << " INR" << endl; break;
            case 2: result = amount / USD_INR; cout << amount << " INR = " << result << " USD" << endl; break;
            case 3: result = amount / EUR_USD; cout << amount << " USD = " << result << " EUR" << endl; break;
            case 4: result = amount * EUR_USD; cout << amount << " EUR = " << result << " USD" << endl; break;
            case 5: result = amount * GBP_INR; cout << amount << " GBP = " << result << " INR" << endl; break;
            case 6: result = amount / GBP_INR; cout << amount << " INR = " << result << " GBP" << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    } while (choice != 0);
    return 0;
}