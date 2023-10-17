#include <iostream>
using namespace std;

class DoublyNode
{
public:
    int data;
    DoublyNode *next;
    DoublyNode *prev;

    DoublyNode()
    {
        data = 0;
        next = NULL;
        prev = NULL;
    }

    DoublyNode(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};