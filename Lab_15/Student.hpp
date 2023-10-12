#include <iostream>
#include <string>
#include "Address.hpp"
using namespace std;

class Student
{
private:
    string name;
    static int count;
    int studentId;
    Address address;

public:
    Student(string name, Address address)
    {
        this->name = name;
        this->address = address;
        this->studentId = ++count;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "StudentId: " << studentId << endl;
        cout << "Address: ";
        address.display(); 
    }
};