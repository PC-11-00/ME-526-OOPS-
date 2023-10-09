#include <iostream>
#include <string>
using namespace std;
class Address
{
private:
    string line;
    string city;
    string state;
    string pincode;

public:
    Address() {}
    Address(string line, string city, string state, string pincode)
    {
        this->line = line;
        this->city = city;
        this->state = state;
        this->pincode = pincode;
    }
    void display()
    {
        cout << line << " , " << city << " , " << state << " - " << pincode << endl;
    }
};