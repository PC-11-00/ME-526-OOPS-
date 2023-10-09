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
#include "Employee.hpp"
#include <climits>
using namespace std;
#define MOD 1000000007

int Employee::count = 0;
int main()
{
    Employee e1("John", 50000.0);
    Employee e2("Alice", 4500.0);
    Employee e3(e1);

    e1.display();
    e2.display();
    e3.display();
    cout << "Total number of employess: " << Employee::getCount() << endl;
    return 0;
}