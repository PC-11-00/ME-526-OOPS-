#include<iostream>
#include"DoublyLinkedList.h"
using namespace std;

int main() {
    DoublyLinkedList dll;

    dll.append(1);
    dll.append(2);
    dll.append(3);

    cout << "Initial Doubly Linked List: ";
    dll.display();

    dll.deleteEnd();
    cout << "After deleting the last element: ";
    dll.display();

    return 0;
}