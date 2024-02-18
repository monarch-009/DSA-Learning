#include <iostream>
using namespace std;

// Constant -> unchangeable and read-only

int main()
{
    const int num = 15; // num will always be 15
    cout << "Nummber: " << num << endl;
    // num = 10; // error: assignment of read-only variable 'num'

    return 0;
}