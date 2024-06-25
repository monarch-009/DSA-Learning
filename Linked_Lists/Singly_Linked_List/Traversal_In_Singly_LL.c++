#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void printList(Node *head)  // function to print the linked list
{
    Node *temp = head;    // temp is a pointer to the head node
    while (temp != nullptr)  // loop will run until temp is not equal to nullptr
    {
        cout << temp->data << " ";  // this will print the data of the node
        temp = temp->next;  // temp is pointing to the next node
    }
    cout << endl; // print a new line after the list is printed
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;

    printList(head);  // this will print the linked list 10 20 30 40 ;

    return 0;
}
