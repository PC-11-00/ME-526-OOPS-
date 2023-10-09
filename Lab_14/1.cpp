/*Code by PC*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iomanip>
#include <queue>
#include <stack>
#include <map>
#include "Student.hpp"
#include <cmath>
#include <numeric>
#include <climits>
using namespace std;

int Student::count = 0;
int main()
{
    Address studentAddress("123 Main Street", "Cityville", "Stateville", "12345");

    // Create a Student object with the Address
    Student student("John Doe", studentAddress);

    Address studentAddress1("204, Hostel-B", "IIT Mandi", "Himachal Pradesh", "175005");
    Student student1("PC", studentAddress1);
    // Display student information
    student.display();
    student1.display();
}