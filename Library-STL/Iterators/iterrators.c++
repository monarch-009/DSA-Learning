#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator i = v.begin(); // iterator is a pointer to the element of the vector v

    cout << *i << endl; // 1
    i++;
    cout << *i << endl; // 2
    i += 2;
    cout << *i << endl; // 4
    i = v.end();
    cout << *i << endl; // 0

    for(i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " "; 
    }

    i = v.begin();
    // next() and prev() are used to move the iterator to the next and previous element

    cout << *next(i,2) << endl; // 2
    cout << *prev(i) << endl; // 0

    // advance() is used to move the iterator to the specified position
    advance(i, 2);
    cout << *i << endl; // 3
    return 0;
}