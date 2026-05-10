#include <iostream>
#include <string>
using namespace std;
class Engine {
    int horsepower;
    string fuelType;
public:
    Engine(int hp, string fuel) : horsepower(hp), fuelType(fuel) {}
    void start() {
        cout << "Engine started. HP=" << horsepower << " Fuel=" << fuelType << endl;
    }
    void stop() { cout << "Engine stopped." << endl; }
    int getHP() { return horsepower; }
};
class Car {
    string model;
    Engine engine;
public:
    Car(string m, int hp, string fuel) : model(m), engine(hp, fuel) {}
    void drive() {
        cout << "Car: " << model << endl;
        engine.start();
        cout << "Driving at " << engine.getHP() << " HP." << endl;
    }
    void park() { engine.stop(); cout << "Car parked." << endl; }
};
int main() {
    Car myCar("Honda City", 120, "Petrol");
    myCar.drive();
    myCar.park();
    return 0;
}