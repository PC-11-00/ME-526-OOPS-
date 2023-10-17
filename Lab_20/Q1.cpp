#include<iostream>
#include"CircularLinkedList.h"
using namespace std;

int main() {
    CircularLinkedList cll;

    cll.append(1);
    cll.append(2);
    cll.append(3);

    cout << "Initial Circular Linked List: ";
    cll.display();

    cll.deleteEnd();
    cout << "After deleting the last element: ";
    cll.display();

    return 0;
}