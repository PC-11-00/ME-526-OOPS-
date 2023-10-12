#include <iostream>
using namespace std;
class Item
{
public:
    int value;
    Item()
    {
        value = 0;
    }
    Item(int val)
    {
        this->value = val;
    }
};
class Stack
{
private:
    vector<Item> elements;
    int top;

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            elements.push_back(i);
        }
    }
    void push(int element)
    {
        if (top == 4)
        {
            cout << "Stack is already full." << endl;
            return;
        }
        elements[++top] = element;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return elements[top--].value;
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return elements[top].value;
    }
    bool isEmpty()
    {
        return top < 0;
    }
    bool isFull()
    {
        return top == 0;
    }
};