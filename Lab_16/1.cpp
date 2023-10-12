/*Code by PC*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iomanip>
#include "Stack.hpp"
using namespace std;
#define MOD 1000000007

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";

    cout << "Top element is : " << s.peek() << endl;

    cout << "Elements present in stack : ";
    while (!s.isEmpty())
    {
        cout << s.peek() << " ";
        s.pop();
    }
    cout << "\nChecking if stack is full: " << s.isFull() << endl;
    return 0;
}