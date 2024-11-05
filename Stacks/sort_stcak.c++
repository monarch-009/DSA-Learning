#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int> &st, int element)
{
    // Base case: if stack is empty or top of stack is smaller than element
    if (st.empty() || st.top() < element)
    {
        st.push(element);
        return;
    }

    // Otherwise, pop the top element and recur
    int top = st.top();
    st.pop();
    sortedInsert(st, element);

    // Put back the top element after recursion
    st.push(top);
}


void sortStack(stack<int> &st)
{
    // Base case: if stack is empty
    if (st.empty())
    {
        return;
    }

    // Remove the top element
    int top = st.top();
    st.pop();

    // Sort the remaining stack
    sortStack(st);

    // Insert the top element back in sorted order
    sortedInsert(st, top);
}


void printStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> st;
    st.push(30);
    st.push(-5);
    st.push(18);
    st.push(14);
    st.push(-3);

    cout << "Original Stack:" << endl;
    printStack(st);

    sortStack(st);

    cout << "Sorted Stack:" << endl;
    printStack(st);

    return 0;
}