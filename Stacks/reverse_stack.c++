#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int target)
{
    // Base Case
    if (s.empty())
    {
        s.push(target); // Is stack is empty push top element
        return;
    }

    int topElement = s.top();
    s.pop();

    // Recursive call
    insertAtBottom(s, target);

    // BackTracking
    s.push(topElement);
}

void reverseStack(stack<int> &s)
{
    // Base Case
    if (s.empty())
    {
        return;
    }

    int target = s.top();
    s.pop();

    // Recursive call
    reverseStack(s);

    // insert at target at bottom
    insertAtBottom(s, target);
}

void printStack(stack<int> &s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    reverseStack(s);
    printStack(s);

    return 0;
}