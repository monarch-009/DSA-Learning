#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;

    // Insert element in stack
    s.push(90);
    s.push(80);
    s.push(70);
    s.push(60);
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

    // loop run till stack get empty
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}