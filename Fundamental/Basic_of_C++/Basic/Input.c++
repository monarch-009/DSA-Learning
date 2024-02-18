#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Enter first number: ";
    cin >> a; // cin is a object used to take input from user and runtime
    cout << "Enter second number: ";
    cin >> b;
    int sum = a + b;
    cout << "Sum of numbers is " << sum << endl;
    return 0;
}