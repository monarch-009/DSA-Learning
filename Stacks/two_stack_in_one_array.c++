#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top1; // This is for stack 1
    int top2; // This is for stcak 2

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        this->top1 = -1;   // Stack1 start from index 0 in array
        this->top2 = size; // Stack2 start from last index [size] in array
    }

    // For stack 1
    void push1(int data)
    {
        if (top2 - top1 == 1)
        {
            // space not available
            cout << "OVERFLOW" << endl;
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }
    void pop1()
    {
        if (top1 == -1)
        {
            cout << "Stack 1 UNDERFLOW" << endl;
        }
        else
        {
            arr[top1] = 0;
            top1--;
        }
    }

    // For Stack 2
    void push2(int data)
    {
        if (top2 - top1 == 1)
        {
            // space not available
            cout << "OVERFLOW" << endl;
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
    }
    void pop2()
    {
        if (top2 == size)
        {
            cout << "Stack 2 UNDERFLOW" << endl;
        }
        else
        {
            arr[top2] = 0;
            top2++;
        }
    }

    // To print full array
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s(10);

    // Insert in stack 1;
    s.push1(10);
    s.print();
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    s.push1(40);
    s.print();
    s.push1(50);
    s.print();

    // Insert in Stack 2;
    s.push2(100);
    s.print();
    s.push2(200);
    s.print();
    s.push2(300);
    s.print();
    s.push2(400);
    s.print();
    s.push2(500);
    s.print();

    s.pop1();
    s.print();
    s.pop1();
    s.print();
    s.pop1();
    s.print();
    s.pop1();
    s.print();
    s.pop1();
    s.print();

    s.pop2();
    s.print();
    s.pop2();
    s.print();
    s.pop2();
    s.print();

    s.push1(1000);
    s.print();

    s.push2(1000);
    s.print();

    return 0;
}