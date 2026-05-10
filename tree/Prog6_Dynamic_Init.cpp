#include <iostream>
using namespace std;
class Deposit {
    float principal, rate, time, maturityAmount;
public:
    Deposit(float p, float r, float t) {
        principal = p; rate = r; time = t;
        maturityAmount = p + (p * r * t) / 100.0f;
        cout << "Object dynamically initialized." << endl;
    }
    void display() {
        cout << "Principal : " << principal << endl;
        cout << "Rate : " << rate << "%" << endl;
        cout << "Time : " << time << " yrs" << endl;
        cout << "Maturity : " << maturityAmount << endl;
    }
};
int main() {
    float p, r, t;
    cout << "Enter principal, rate, time: ";
    cin >> p >> r >> t;
    Deposit d(p, r, t);
    d.display();
    return 0;
}