#include <iostream>
using namespace std;
float simpleInterest(float principal, float rate = 5.0, float time = 1) {
    return (principal * rate * time) / 100;
}
int main() {
    float p;
    cout << "Enter principal amount: ";
    cin >> p;
    cout << "SI (default rate=5%, time=1 yr): " << simpleInterest(p) << endl;
    cout << "SI (rate=8%, time=2 yrs): " << simpleInterest(p,8,2) << endl;
    cout << "SI (rate=10%, time=1 yr): " << simpleInterest(p,10) << endl;
    return 0;
}