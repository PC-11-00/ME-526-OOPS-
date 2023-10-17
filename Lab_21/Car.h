#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle {
protected:
    string model;

public:
    Car(string manufacturer, int year, string model) : Vehicle(manufacturer, year), model(model) {}

    void print() {
        Vehicle::print();
        cout << "Model: " << model << endl;
    }
};