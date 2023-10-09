#include <iostream>
#include <string>

class Employee {
private:
    static int count; // Static variable to keep track of the number of Employee objects
    int employeeId;
    std::string name;
    double salary;

public:
    // Constructor to initialize an Employee object
    Employee(std::string name, double salary) {
        this->employeeId = ++count; // Increment the employeeId and set it
        this->name = name;
        this->salary = salary;
    }

    // Copy constructor to create a new Employee object by copying the data from an existing one
    Employee(const Employee& other) {
        this->employeeId = ++count; // Increment the employeeId for the new object
        this->name = other.name;
        this->salary = other.salary;
    }

    // Getter methods
    int getEmployeeId() const {
        return employeeId;
    }

    std::string getName() const {
        return name;
    }

    double getSalary() const {
        return salary;
    }

    // Static method to get the total count of Employee objects created
    static int getCount() {
        return count;
    }

    // Display employee information
    void display() const {
        std::cout << "Employee [ID=" << employeeId << ", Name=" << name << ", Salary=" << salary << "]" << std::endl;
    }
};

// Initialize the static count variable
int Employee::count = 0;

int main() {
    // Create Employee objects
    Employee emp1("John", 50000.0);
    Employee emp2("Alice", 60000.0);

    // Use the copy constructor to create a new Employee object
    Employee emp3(emp1);

    // Display employee information
    emp1.display();
    emp2.display();
    emp3.display();

    // Display the total count of Employee objects created
    std::cout << "Total Employee Count: " << Employee::getCount() << std::endl;

    return 0;
}
