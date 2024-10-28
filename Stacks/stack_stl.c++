#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // size()
    cout << "Size of stack is: " << s.size() << endl;

    // top()
    cout << "Top element in stack before pop: " << s.top() << endl;

    // pop()
    s.pop();
    cout << "Top element after one pop: " << s.top() << endl;

    // empty();
    if (s.empty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack is not empty." << endl;
    }
    return 0;
}