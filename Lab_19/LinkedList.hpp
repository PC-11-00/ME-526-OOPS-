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

    void deleteAll(int data)
    {
        Node *current = head;
        Node *previous = NULL;

        while (current != NULL)
        {
            if (current->data == data)
            {
                if (previous == NULL)
                {
                    head = current->next;
                }
                else
                {
                    previous->next = current->next;
                }

                if (current == tail)
                {
                    tail = previous;
                }

                delete current;
            }
            previous = current;
            current = current->next;
        }
    }
    void deleteLast(int data)
    {

        Node *current = head;
        Node *previous = NULL;
        Node *lastOccurrence = NULL;

        while (current != NULL)
        {
            if (current->data == data)
            {
                lastOccurrence = previous;
            }
            previous = current;
            current = current->next;
        }

        if (lastOccurrence != NULL)
        {
            current = lastOccurrence->next;
            lastOccurrence->next = current->next;
            delete current;
        }
        else if (head != NULL && head->data == data)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }

        if (tail != NULL && tail->data == data)
        {
            tail = lastOccurrence;
        }
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