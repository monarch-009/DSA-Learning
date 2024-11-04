#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s, int target)
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
    solve(s, target);

    // BackTracking
    s.push(topElement);
}

void insertAtBottom(stack<int> &s)
{
    // Check stack is empty or not
    if (s.empty())
    {
        // If empty
        cout << "Stack is empty, can't insert at bottom" << endl;
        return;
    }
    int target = s.top(); // Element which we have to insert it in bottom
    s.pop();
    solve(s, target); // Recursive function
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
    
    insertAtBottom(s);
    printStack(s);

    return 0;
}