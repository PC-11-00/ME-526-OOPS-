#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string manufacturer;
    int year;

public:
    Vehicle(string manufacturer, int year) : manufacturer(manufacturer), year(year) {}

    void print() {
        cout << "Manufacturer: " << manufacturer << ", Year: " << year << endl;
    }
};






