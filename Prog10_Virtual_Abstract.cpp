#include <iostream>
using namespace std;
class Shape {
public:
    virtual void draw() = 0;
    virtual double area() = 0;
    virtual ~Shape() {}
};
class Circle : public Shape {
    double r;
public:
    Circle(double radius) : r(radius) {}
    void draw() override { cout << "Circle drawn." << endl; }
    double area() override { return 3.14159 * r * r; }
};
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void draw() override { cout << "Triangle drawn." << endl; }
    double area() override { return 0.5 * base * height; }
};
class Square : public Shape {
    double side;
public:
    Square(double s) : side(s) {}
    void draw() override { cout << "Square drawn." << endl; }
    double area() override { return side * side; }
};
int main() {
    Shape* shapes[] = { new Circle(7), new Triangle(6,4), new Square(5) };
    for (Shape* s : shapes) {
        s->draw();
        cout << "Area = " << s->area() << endl;
        delete s;
    }
    return 0;
}