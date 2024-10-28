#include <iostream>
#include <stack>
using namespace std;

// Reverse string using stack
int main()
{
    string str = "Aditya"; // String

    stack<char> s; // Create a stack

    // Insert string char in stack
    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }

    // Print element in stack
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0
}