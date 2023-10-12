#include <iostream>
#include "LinkedList.hpp"
using namespace std;

int main()
{
    LinkedList list;
    list.addNodeAtEnd(12);
    list.addNodeAtEnd(3);
    list.addNodeAtEnd(8);
    list.addNodeAtEnd(21);

    list.display();

    cout << "Add 7 at the start: " << endl;
    list.addNodeAtStart(7);
    list.display();

    cout << "Add 5 after 3: " << endl;
    list.addNodeAfter(5, 3);
    list.display();

    cout << "Add 16 after 9: " << endl;
    list.addNodeAfter(16, 9);

    return 0;
}