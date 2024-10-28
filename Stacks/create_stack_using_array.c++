#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int size;
public:
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // Functions of Stack

    // Insert element in stack
    void push(int data)
    {
        if (size - top > 1)
        {
            // Space available
            // Insert data
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Stack Overflow." << endl;
        }
    }

    // Remove element from stack
    void pop()
    {
        if (top == -1)
        {
            // Stack is empty
            cout << "Stack is underflow" << endl;
        }
        else
        {
            // stack is not empty
            top--;
        }
    }

    // Get the top element in the stack
    int getTop()
    {
        // Check if stack is empty or not
        if (top == -1)
        {
            // if empty
            cout << "There is no element in stack - stack is empty." << endl;
        }
        else
        {
            return arr[top];
        }
    }

    // Return the size of stack not the array
    int getSize()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack s(10);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    cout << "Size of the stack is " << s.getSize() << endl;
    while (!s.isEmpty())
    {
        cout << s.getTop() << " ";
        s.pop();
    }
    cout << endl;
    cout << "Size of the stack is " << s.getSize() << endl;
    return 0;
}