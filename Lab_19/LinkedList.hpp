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

    void addNodeAtStart(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void addNodeAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void addNodeAfter(int insertNode, int searchNode)
    {
        Node *newNode = new Node(insertNode);
        Node *current = head;
        bool nodeFound = false;
        while (current != NULL)
        {
            if (current->data == searchNode)
            {
                newNode->next = current->next;
                current->next = newNode;
                if (current == tail)
                {
                    tail = newNode;
                }
                nodeFound = true;
                break;
            }
            current = current->next;
        }

        if (nodeFound == false)
        {
            cout << "Node doesn't exist" << endl;
        }
    }

    void deleteAll()
    {
        Node *curr = head;
        while (curr != NULL)
        {
            Node *temp = curr;
            curr = curr->next;
            delete temp;
        }
        head = NULL;
    }
    void deleteLast()
    {

        Node *curr = head;
        if (curr == NULL)
        {
            cout << "List is Empty" << endl;
            return;
        }
        if (tail == NULL)
        {
            Node *temp = curr;
            curr = NULL;
            delete temp;
            return;
        }
        while (curr->next != tail)
        {
            curr = curr->next;
        }
        Node *temp = tail;
        tail = curr;
        curr->next = NULL;
        delete temp;
    }

    void reverse()
    {
        Node *prev = NULL;
        Node *next = NULL;
        Node *curr = head;
        tail = head;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    // Display the list
    void display()
    {
        cout << "Linked List:: ";
        Node *current = head;
        if (head == NULL)
        {
            cout << "It is empty";
        }
        while (current != NULL)
        {
            cout << current->data;
            if (current->next != NULL)
            {
                cout << " -> ";
            }
            else
            {
                cout << " -> NULL";
            }
            current = current->next;
        }
        cout << endl;
    }
};