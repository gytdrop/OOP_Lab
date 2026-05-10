#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Account {
    int accNo;
    string holder;
    double balance;
    string type;
public:
    Account(int no, string name, double bal, string t)
        : accNo(no), holder(name), balance(bal), type(t) {}
    void deposit(double amt) {
        if (amt <= 0) { cout << "Invalid amount." << endl; return; }
        balance += amt;
        cout << "Deposited " << amt << ". Balance: " << balance << endl;
    }
    void withdraw(double amt) {
        if (amt <= 0 || amt > balance) { cout << "Insufficient funds." << endl; return; }
        balance -= amt;
        cout << "Withdrawn " << amt << ". Balance: " << balance << endl;
    }
    void display() const {
        cout << "Account No : " << accNo << endl;
        cout << "Holder : " << holder << endl;
        cout << "Type : " << type << endl;
        cout << "Balance : " << balance << endl;
    }
    int getAccNo() const { return accNo; }
};
class Bank {
    vector<Account> accounts;
    int nextAccNo = 1001;
public:
    void createAccount() {
        string name, type; double bal;
        cout << "Enter name: "; cin >> name;
        cout << "Account type (Savings/Current): "; cin >> type;
        cout << "Initial deposit: "; cin >> bal;
        accounts.push_back(Account(nextAccNo++, name, bal, type));
        cout << "Account created! No: " << (nextAccNo-1) << endl;
    }
    Account* find(int no) {
        for (auto& a : accounts) if (a.getAccNo() == no) return &a;
        return nullptr;
    }
    void depositMenu() {
        int no; double amt;
        cout << "Account No: "; cin >> no;
        Account* a = find(no);
        if (!a) { cout << "Not found." << endl; return; }
        cout << "Amount: "; cin >> amt; a->deposit(amt);
    }
    void withdrawMenu() {
        int no; double amt;
        cout << "Account No: "; cin >> no;
        Account* a = find(no);
        if (!a) { cout << "Not found." << endl; return; }
        cout << "Amount: "; cin >> amt; a->withdraw(amt);
    }
    void displayAccount() {
        int no; cout << "Account No: "; cin >> no;
        Account* a = find(no);
        if (!a) cout << "Not found." << endl;
        else a->display();
    }
    void displayAll() {
        if (accounts.empty()) { cout << "No accounts." << endl; return; }
        for (auto& a : accounts) a.display();
    }
};
int main() {
    Bank bank; int choice;
    do {
        cout << "\n===== Bank Management System =====" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. View Account" << endl;
        cout << "5. View All" << endl;
        cout << "0. Exit" << endl;
        cout << "Choice: "; cin >> choice;
        switch(choice) {
            case 1: bank.createAccount(); break;
            case 2: bank.depositMenu(); break;
            case 3: bank.withdrawMenu(); break;
            case 4: bank.displayAccount(); break;
            case 5: bank.displayAll(); break;
            case 0: cout << "Goodbye!" << endl; break;
            default: cout << "Invalid." << endl;
        }
    } while (choice != 0);
    return 0;
}