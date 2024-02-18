#include <iostream>
using namespace std;

// Variables are containers for storing data values.
int main()
{
    // There are different types of variables (defined with different keywords)
    int num1 = 5;         // integers (whole numbers), without decimals
    float num2 = 16.6;    // floating number with less value
    double num3 = 19.99;  // floating point numbers, with decimals
    char ch = 'A';        // single characters, as 'A' . Char values are surrounded by single quotes
    string st = "Aditya"; // text as "Aditya". String values are surrounded by double quotes
    bool a = true;        // two states: true or false

    cout << "Interger: " << num1 << endl;
    cout << "Float: " << num2 << endl;
    cout << "Double: " << num3 << endl;
    cout << "Char: " << ch << endl;
    cout << "String: " << st << endl;
    cout << "Bool: " << a << endl;

    return 0;
}