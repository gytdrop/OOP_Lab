#include <iostream>
#include <cmath>
using namespace std;
float area(float r) { return 3.14159f * r * r; }
float area(float l, float b) { return l * b; }
float area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int sum(int a, int b) { return a + b; }
float sum(float a, float b) { return a + b; }
int sum(int a, int b, int c) { return a + b + c; }
float volume(float s) { return s * s * s; }
float volume(float r, float h) { return 3.14159f * r * r * h; }
int main() {
    cout << "Area of circle (r=5): " << area(5.0f) << endl;
    cout << "Area of rectangle (4x6): " << area(4.0f, 6.0f) << endl;
    cout << "Area of triangle (3,4,5): " << area(3,4,5) << endl;
    cout << "Sum (3+4): " << sum(3, 4) << endl;
    cout << "Sum (1.5+2.5): " << sum(1.5f, 2.5f) << endl;
    cout << "Sum (1+2+3): " << sum(1, 2, 3) << endl;
    cout << "Volume of cube (s=3): " << volume(3.0f) << endl;
    cout << "Volume of cylinder(r=2,h=5): " << volume(2.0f, 5.0f)<< endl;
    return 0;
}