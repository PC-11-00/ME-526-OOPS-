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
    const int n = 4;
    Student da[n - 1] = {
        Student("PC", Address("204", "IIT Mandi", "Himachal", "India")),
        Student("Piyush", Address("203", "IIT Mandi", "Himachal", "India")),
        Student("Guru", Address("209", "IIT Mandi", "Himachal", "India"))};
    for (int i = 0; i < n - 1; i++)
    {
        cout << i + 1 << " : ";
        da[i].display();
    }

    return 0;
}