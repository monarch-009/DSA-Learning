#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> prevSmallerElement(vector<int> &v)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(v.size());

    for (int i = 0; i < v.size(); i++)
    {
        int current = v[i];

        while (s.top() >= current)
        {
            s.pop();
        }

        ans[i] = s.top();

        s.push(current);
    }
    return ans;
}

vector<int> nextSmallerElement(vector<int> &v)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(v.size());

    for (int i = v.size() - 1; i >= 0; i--)
    {
        int current = v[i];

        while (s.top() >= current)
        {
            s.pop();
        }

        ans[i] = s.top();

        s.push(current);
    }
    return ans;
}

void printAnswer(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> v; // It may be array or vector
    v.push_back(4);
    v.push_back(8);
    v.push_back(5);
    v.push_back(2);
    v.push_back(25);

    cout << "Next Smaller Element.." << endl;
    printAnswer(nextSmallerElement(v));
    cout << "Prev Smaller Element.." << endl;
    printAnswer(prevSmallerElement(v));

    return 0;
}
