#include<iostream>
#include"DoublyNode.h"
using namespace std;

class DoublyLinkedList {
private:
    DoublyNode* head; // Pointer to the head of the doubly linked list

public:
    DoublyLinkedList() : head(nullptr) {}

    // Function to add a DoublyNode at the end of the doubly linked list
    void append(int data) {
        DoublyNode* newDoublyNode = new DoublyNode(data);

        if (!head) {
            head = newDoublyNode;
        } else {
            DoublyNode* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newDoublyNode;
            newDoublyNode->prev = temp;
        }
    }

    // Function to delete a DoublyNode from the end of the doubly linked list
    void deleteEnd() {
        if (!head) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }

        if (!head->next) {
            delete head;
            head = nullptr;
        } else {
            DoublyNode* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->prev->next = nullptr;
            delete temp;
        }
    }

    // Function to display the doubly linked list
    void display() {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }

        DoublyNode* temp = head;
        while (temp) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << " (End of List)" << endl;
    }
};