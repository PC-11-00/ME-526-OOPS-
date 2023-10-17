#include<iostream>
#include"Node.h"
using namespace std;

class CircularLinkedList {
private:
    Node* head; // Pointer to the head of the circular linked list

public:
    CircularLinkedList() : head(nullptr) {}

    // Function to add a node at the end of the circular linked list
    void append(int data) {
        Node* newNode = new Node(data);

        if (!head) {
            head = newNode;
            head->next = head; // Point to itself since it's the only node
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head; // Make it circular
        }
    }

    // Function to delete a node from the end of the circular linked list
    void deleteEnd() {
        if (!head) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }

        if (head->next == head) {
            delete head;
            head = nullptr;
        } else {
            Node* prev = head;
            Node* current = head;
            while (current->next != head) {
                prev = current;
                current = current->next;
            }
            prev->next = head;
            delete current;
        }
    }

    // Function to display the circular linked list
    void display() {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << " (Back to Head)" << endl;
    }
};