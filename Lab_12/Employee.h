/*Code by PC*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iomanip>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
using namespace std;

class Employee
{
private:
    string name;
    int id;
    int salary;

public:
    Employee()
    {
        name = "Hello";
        id = 2;
        salary = 3000;
    }
    Employee(string name, int id, int salary)
    {
        this->name = name;
        this->id = id;
        this->salary = salary;
    }
    void printEmployee()
    {
        cout << "name: " << name << endl;
        cout << "id: " << id << endl;
        cout << "salary: " << salary << endl;
    }
};