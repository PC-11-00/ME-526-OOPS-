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

    list.addNodeAtStart(7);
    list.addNodeAfter(5, 3);
    list.display();

    cout << "Reverse the Linked List" << endl;
    list.reverse();
    list.display();
    list.addNodeAtEnd(6);
    list.addNodeAtEnd(6);
    list.display();
    cout << "Delete last node" << endl;
    list.deleteLast(6);
    list.display();

    cout << "Delete all nodes" << endl;
    list.deleteAll(6);
    list.display();

    return 0;
}