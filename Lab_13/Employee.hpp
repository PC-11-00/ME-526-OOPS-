#include <iostream>
#include <string>
#include <climits>
using namespace std;
class Employee
{
private:
    static int count;
    string name;
    int employeeId;
    double salary;

public:
    // constructor
    Employee(string name, double salary)
    {
        this->employeeId = ++count;
        this->salary = salary;
        this->name = name;
    }
    // copy constructor
    Employee(const Employee &other)
    {
        this->employeeId = ++count;
        this->name = other.name;
        this->salary = other.salary;
    }

    int getEmlpoyeeId()
    {
        return employeeId;
    }
    string getName()
    {
        return name;
    }
    double getSalary() 
    {
        return salary;
    }

    // Static method to get the total count of Employee objects created
    static int getCount()
    {
        return count;
    }

    // Display employee information
    void display() 
    {
        std::cout << "Employee [ID=" << employeeId << ", Name=" << name << ", Salary=" << salary << "]" << std::endl;
    }
};