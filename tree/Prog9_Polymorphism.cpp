#include <iostream>
using namespace std;
class Shape {
public:
    virtual void draw() { cout << "Drawing generic shape." << endl; }
    virtual double area() { return 0; }
};
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void draw() override { cout << "Drawing Circle." << endl; }
    double area() override { return 3.14159 * radius * radius; }
};
class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void draw() override { cout << "Drawing Rectangle." << endl; }
    double area() override { return length * width; }
};
void renderShape(Shape* s) {
    s->draw();
    cout << "Area = " << s->area() << endl;
}
int main() {
    Shape* s1 = new Circle(5);
    Shape* s2 = new Rectangle(4, 6);
    renderShape(s1);
    renderShape(s2);
    delete s1; delete s2;
    return 0;
}