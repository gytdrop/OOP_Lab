#include <iostream>
using namespace std;
class Counter {
    static int count;
    int id;
public:
    Counter() { ++count; id = count; }
    static int getCount() { return count; }
    int getId() { return id; }
};
int Counter::count = 0;
int main() {
    cout << "Initial count: " << Counter::getCount() << endl;
    Counter c1, c2, c3;
    cout << "After creating 3 objects: " << Counter::getCount() << endl;
    cout << "c1 id=" << c1.getId() << " c2 id=" << c2.getId() << " c3 id=" << c3.getId() << endl;
    return 0;
}