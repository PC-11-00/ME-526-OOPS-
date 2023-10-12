#include <iostream>
#include "Node.hpp"
using namespace std;
class LinkedList
{
private:
    Node *head;
    Node *tail;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void addNode(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            if (tail == NULL)
            {
                tail = newNode;
                head->next = tail;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
        }
    }
    void display()
    {
        cout << "My LinkedList" << endl;
        Node *curr = head;
        while (curr->next != NULL)
        {
            cout << curr->data << " -> ";
            curr = curr->next;
        }
        cout << curr->data;
        cout << endl;
    }
};
