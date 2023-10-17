#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

class SportsCar : public Car {
private:
    int topSpeed;

public:
    SportsCar(string manufacturer, int year, string model, int topSpeed) : Car(manufacturer, year, model), topSpeed(topSpeed) {}

    void print() {
        Car::print();
        cout << "Top Speed: " << topSpeed << " mph" << endl;
    }
};