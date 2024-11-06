#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> q; // Create queue using stl
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);

    cout << "Font element in queue: " << q.front() << endl;        // front()
    cout << "Rear or back element in queue: " << q.back() << endl; // back()
    cout << "Size of queue " << q.size() << endl;                  // size()

    q.pop(); // pop()
    cout << "Font element after one pop() in queue: " << q.front() << endl;
    cout << "Size of queue after one pop() is " << q.size() << endl;

    cout << "Traversal of queue -> ";
    while (!q.empty()) // empty
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}