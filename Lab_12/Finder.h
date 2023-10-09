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

class Finder
{
public:
    double findArea(float radius)
    {
        return 22 / 7 * 1.0 * radius * radius;
    }
    double findArea(int a, int b)
    {
        return a * b * 1.0;
    }
    double findArea(int a,string s)
    {
        return a * a * 1.0;
    }
};