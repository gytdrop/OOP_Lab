#include <iostream>
#include <string>
using namespace std;
class Student {
    int rollNo;
    string name;
    float marks;
public:
    Student() : rollNo(0), name("Unknown"), marks(0.0f) {
        cout << "Default constructor called" << endl;
    }
    Student(int r, string n, float m) : rollNo(r), name(n), marks(m) {
        cout << "Parameterized constructor called" << endl;
    }
    Student(const Student& s) : rollNo(s.rollNo), name(s.name), marks(s.marks) {
        cout << "Copy constructor called" << endl;
    }
    Student(string n) : rollNo(0), name(n), marks(0.0f) {
        cout << "Overloaded (name only) constructor called" << endl;
    }
    void display() {
        cout << "Roll: " << rollNo << " | Name: " << name << " | Marks: " << marks << endl;
    }
};
int main() {
    Student s1;
    Student s2(101, "Alice", 92.5f);
    Student s3(s2);
    Student s4("Bob");
    cout << endl;
    s1.display(); s2.display(); s3.display(); s4.display();
    return 0;
}